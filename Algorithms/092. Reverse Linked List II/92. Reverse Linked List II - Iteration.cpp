//Approach : Iteration
//   √ 44/44 cases passed (4 ms)
//   √ Your runtime beats 100 % of cpp submissions
//   √ Your memory usage beats 55.81 % of cpp submissions (8.8 MB)
// T/S Complexity : O(n)/O(1)

class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int m, int n) {
        if(!head)   return nullptr;
        if(m == n)  return head;
        int step = n - m--;
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* reverse_head = dummy;
        while(m--)
            reverse_head = reverse_head->next;
        ListNode* temp_head = reverse_head->next;
        while(step--)
        {
            ListNode* pre_head = temp_head->next;
            temp_head->next = pre_head->next;
            pre_head->next = reverse_head->next;
            reverse_head->next = pre_head;
        }
        return dummy->next;
    }
};