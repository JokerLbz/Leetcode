//Question : 83. Remove Duplicates from Sorted List
//URL : https://leetcode.com/problems/remove-duplicates-from-sorted-list/
//Approach : Intuition (直接求解)
//Runtime : 8 ms (100%)
//Memory Usage : 9.4 MB (10.37%)
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
        if(!head)   return head;
        ListNode* iter = head;
        while(iter -> next)
        {
            while(iter -> next && iter -> next -> val == iter -> val)
            {
                ListNode *temp = iter -> next;
                iter -> next = iter -> next -> next;
                delete temp;
            }
            if(iter -> next)
                iter = iter -> next;
        }
        return head;
    }
};