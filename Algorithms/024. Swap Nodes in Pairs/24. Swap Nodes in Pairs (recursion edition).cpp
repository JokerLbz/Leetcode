//Question : 24. Swap Nodes in Pairs
//URL : https://leetcode.com/problems/swap-nodes-in-pairs/
//Approach : Recursion (递归)
//Runtime : 4 ms (100%)
//Memory Usage : 9 MB (12.13%)
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
    ListNode* swapPairs(ListNode* head) {
        if(!head || !head -> next)  return head;
        ListNode *rev_head = head -> next;
        head -> next = swapPairs(head -> next -> next);
        rev_head -> next = head;
        return rev_head;
    }
};