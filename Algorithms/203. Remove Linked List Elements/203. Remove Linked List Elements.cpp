//Question : 203. Remove Linked List Elements
//URL : https://leetcode.com/problems/remove-linked-list-elements/
//Approach : traversal
//Runtime : 28 ms (99.73%)
//Memory Usage : 11.3 MB (77.22%)
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
    ListNode* removeElements(ListNode* head, int val) {
        while(head && head->val == val) 
            head = head->next;
        if(!head)   return head;
        ListNode* temp = head;
        while(temp->next)
        {
            if(temp->next->val == val)
                temp->next = temp->next->next;
            else
                temp = temp->next;
        }
        return head;
    }
};