//Question : 143. Reorder List
//URL : https://leetcode.com/problems/reorder-list/
//Approach : Reverse half list and merge (反转后半链表并且合并)
//Runtime : 48 ms (100%)
//Memory Usage : 12.2 MB (51.08%)
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
    void reorderList(ListNode* head) {
        if(!head || !head -> next)   return;
        ListNode* dummy = new ListNode(0);
        dummy -> next = head;
        ListNode* slow = dummy, *fast = dummy;
        while(fast -> next)
        {
            fast = fast -> next;
            slow = slow -> next;
            if(fast -> next)    fast = fast -> next;
        }
        ListNode* mid = reverseList(slow -> next), *curr = head;
        slow -> next = nullptr;
        while(mid && head)
        {
            head = head -> next;
            curr -> next = mid;
            mid = mid -> next;
            curr = curr -> next;
            curr -> next = head;
            curr = curr -> next;
        }
        head = dummy -> next;
    }
    
    ListNode* reverseList(ListNode* head)
    {
        ListNode* pre = nullptr;
        while(head)
        {
            ListNode* tmp = head -> next;
            head -> next = pre;
            pre = head;
            head = tmp;
        }
        return pre;
    }
};