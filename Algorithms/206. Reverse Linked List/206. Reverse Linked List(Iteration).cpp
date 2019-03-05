//Question : 206. Reverse Linked List
//URL : https://leetcode.com/problems/reverse-linked-list/
//Approach : Iteration (迭代)
//Runtime : 8 ms (100%)
//Memory Usage : 9.3 MB (9.58%)
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
        if(!head || !head -> next)  return head;
        ListNode* dummy = new ListNode(0);
        dummy -> next = head;
        while(head -> next)
        {
            ListNode* temp_head = head -> next;
            head -> next = head -> next -> next;
            temp_head -> next = dummy -> next;
            dummy -> next = temp_head;
        }
        return dummy -> next;
    }
};