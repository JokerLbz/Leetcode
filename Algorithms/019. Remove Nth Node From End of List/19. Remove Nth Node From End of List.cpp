//Question : 19. Remove Nth Node From End of List
//URL : https://leetcode.com/problems/remove-nth-node-from-end-of-list/
//Approach : Two Pointer (快慢指针)
//Runtime : 8 ms (100%)
//Memory Usage : 9.8 MB (23.89%)
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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *dummy = new ListNode(0), *fast = head, *slow = dummy;
        dummy -> next = head;
        for(int i = 0; i < n; i++)
            fast = fast -> next;
        while(fast)
        {
            fast = fast -> next;
            slow = slow -> next;
        }
        slow -> next = slow -> next -> next;
        return dummy -> next;
    }
};