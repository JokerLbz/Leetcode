//Question : 328. Odd Even Linked List
//URL : https://leetcode.com/problems/odd-even-linked-list/
//Approach : Intuition
//Runtime : 16 ms (100%)
//Memory Usage : 9.9 MB (83.16%)
//Time complexity : O(n)
//Space complexity : O(1)

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if(!head)   return nullptr;
        ListNode* odd = head, *even_head = head->next, *even = even_head;
        while(even && even->next)
        {
            odd->next = odd->next->next;
            even->next = even->next->next;
            odd = odd->next;
            even = even->next;
        }
        odd->next = even_head;
        return head;
    }
};