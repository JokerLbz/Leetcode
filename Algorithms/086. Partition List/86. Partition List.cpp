//Question : 86. Partition List
//URL : https://leetcode.com/problems/partition-list/
//Approach : Two Pointer (双指针)
//Runtime : 8 ms (100%)
//Memory Usage : 8.7 MB (40.54%)
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
    ListNode* partition(ListNode* head, int x) {
        if(!head || !head -> next)  return head;
        ListNode* larger = new ListNode(0), *smaller = new ListNode(0);
        ListNode* curr = head, *s_head = smaller, *l_head = larger;
        while(curr)
        {
            if(curr -> val < x)
            {
                smaller -> next = curr;
                smaller = smaller -> next;
            }
            else
            {
                larger -> next = curr;
                larger = larger -> next;
            }
            curr = curr -> next;
        }
        smaller -> next = l_head -> next;
        larger -> next = nullptr;
        return s_head -> next;
    }
};