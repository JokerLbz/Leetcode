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
    ListNode* middleNode(ListNode* head) {
        if(!head || !head->next)    return head;
        ListNode* fast = head->next, *slow = head;
        while(fast)
        {
            fast = fast->next;
            slow = slow->next;
            if(fast)
                fast = fast->next;
        }
        return slow;
    }
};