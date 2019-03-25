//Approach : Merge Sort
//   √ 16/16 cases passed (72 ms)
//   √ Your runtime beats 33.13 % of cpp submissions
//   √ Your memory usage beats 37.24 % of cpp submissions (24.7 MB)
//T/S Complexity : O(nlog n)/O(n)

class Solution {
public:
    ListNode* sortList(ListNode* head) {
        if(!head || !head->next)    return head;
        ListNode* fast = head->next, *slow = head;
        while(fast && fast->next)
        {
            fast = fast->next->next;
            slow = slow->next;
        }
        fast = slow->next;
        slow->next = nullptr;
        ListNode* l1 = sortList(head);
        ListNode* l2 = sortList(fast);
        return merge(l1, l2);
    }

    ListNode* merge(ListNode* l1, ListNode* l2)
    {
        ListNode* dummy = new ListNode(0);
        ListNode* cur = dummy;
        while(l1 && l2)
        {
            if(l1->val > l2->val)
            {
                cur->next = l2;
                l2 = l2->next;
            }
            else
            {
                cur->next = l1;
                l1 = l1->next;
            }
            cur = cur->next;
        }
        cur->next = l1 ? l1 : l2;
        return dummy->next;
    }
};