//Question : 24. Swap Nodes in Pairs
//URL : https://leetcode.com/problems/swap-nodes-in-pairs/
//Approach : Intuition without recursion (无递归)
//Runtime : 8 ms (100%)
//Memory Usage : 8.8 MB (76.73%)
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
    ListNode* swapPairs(ListNode* head) {
        if(!head)  return head;
        ListNode *dummy = new ListNode(0);
        dummy -> next = head;
        ListNode *dum_head = dummy, *slow = head, *fast = slow -> next;
        while(slow && slow -> next)
        {
            fast = slow -> next;
            dum_head -> next = fast;
            slow -> next = fast -> next;
            fast -> next = slow;
            //if(!slow -> next)    break;
            dum_head = slow;
            slow = slow -> next;
            
        }
        return dummy -> next;
    }
};