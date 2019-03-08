//Question : 141. Linked List Cycle
//URL : https://leetcode.com/problems/linked-list-cycle/
//Approach : Two Pointer (快慢指针)
//Runtime : 31 ms (5.11%)
//Memory Usage : 12.1 MB (5.09%)
//Time complexity : O(n)
//Space complexity : O(n)

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
        set<ListNode *> s;
        while(head)
        {
            if(s.find(head) != s.end()) 
                return true;
            else
                s.insert(head);
            head = head -> next;
        }
        return false;
    }
};