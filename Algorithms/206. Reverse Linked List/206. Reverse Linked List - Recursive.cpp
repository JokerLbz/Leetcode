//Approach : Recursive
//   √ 27/27 cases passed (8 ms)
//   √ Your runtime beats 100 % of cpp submissions
//   √ Your memory usage beats 60.43 % of cpp submissions (9.1 MB)
// T/S Complexity : O(n)/O(n)

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(!head || !head->next)    return head;
        ListNode* pre = reverseList(head->next);
        head->next->next = head;
        head->next = nullptr;
        return pre;
    }
};