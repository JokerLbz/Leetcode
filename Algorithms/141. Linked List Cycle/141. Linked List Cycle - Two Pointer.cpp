//Question : 141. Linked List Cycle
//URL : https://leetcode.com/problems/linked-list-cycle/
//Approach : Two Pointer (快慢指针)
//Runtime : 12 ms (99.74%)
//Memory Usage : 9.8 MB (30.38%)
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
    bool hasCycle(ListNode *head) {
        ListNode* fast = head, *slow = head;
        while(fast)
        {
            fast = fast -> next;
            if(slow == fast)    return true;
            slow = slow -> next;
            if(fast)
            {
                fast = fast -> next;
                if(slow == fast)    return true;
            }
        }
        return false;
    }
    /*
    bool hasCycle(ListNode *head) {
    if(!head)   return false;
    ListNode* fast = head -> next, *slow = head;
    while(fast != slow)
    {
        if(!fast || !fast -> next) 
            return false;
        slow = slow -> next;
        fast = fast -> next -> next;
    }
    return true;
    }*/
};