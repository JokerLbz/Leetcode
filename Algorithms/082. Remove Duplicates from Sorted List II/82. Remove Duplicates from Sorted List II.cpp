//Question : 82. Remove Duplicates from Sorted List II
//URL : https://leetcode.com/problems/remove-duplicates-from-sorted-list-ii/
//Approach : Intuition (直接求解)
//Runtime : 8 ms (100%)
//Memory Usage : 9.2 MB (25.24%)
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
    ListNode* deleteDuplicates(ListNode* head) {
        if(!head || !head -> next)  return head;
        ListNode* dummy = new ListNode(0);
        dummy -> next = head;
        ListNode* curr = dummy;
        while(curr -> next)
        {
            ListNode* temp = curr -> next;
            while(temp -> next && temp -> next -> val == temp -> val)
                temp = temp -> next;
            if(curr -> next != temp) //have duplicate
                curr -> next = temp -> next;
            else
                curr = curr -> next;
        }
        return dummy -> next;
    }
};