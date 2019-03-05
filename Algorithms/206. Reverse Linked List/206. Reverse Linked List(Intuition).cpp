//Question : 206. Reverse Linked List
//URL : https://leetcode.com/problems/reverse-linked-list/
//Approach : Intuition (直接求解)
//Runtime : 8 ms (100%)
//Memory Usage : 9.2 MB (36.41%)
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
    ListNode* reverseList(ListNode* head) {
        ListNode *pre = nullptr, *curr = head;
        while(curr)
        {
            ListNode* temp = curr -> next;
            curr -> next = pre;
            pre = curr;
            curr = temp;
        }
        return pre;
    }
};