//Question : 21. Merge Two Sorted Lists
//URL : https://leetcode.com/problems/merge-two-sorted-lists/
//Approach : 
//Runtime : 12 ms (100%)
//Memory Usage : 10.1 MB (49.76%)
//Time complexity : O(m+n)  The sum of two numbers
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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode *head = new ListNode(0), *res = head;
        while(l1 && l2)
        {
            if(l1 -> val < l2 -> val)
            {
                head -> next = l1;
                l1 = l1 -> next;
            }
            else
            {
                head -> next = l2;
                l2 = l2 -> next;
            }
            head = head -> next;
        }
        head -> next = l1 ? l1 : l2;
        return res -> next;
    }
};