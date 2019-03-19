//Approach : stack
//   √ 27/27 cases passed (12 ms)
//   √ Your runtime beats 55.09 % of cpp submissions
//   √ Your memory usage beats 58.29 % of cpp submissions (9.2 MB)
// T/S Complexity : O(n)/O(n)

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(!head)   return nullptr;
        stack<ListNode* > s;
        while(head)
        {
            ListNode* temp = head;
            s.push(head);
            head = head->next;
            temp->next = nullptr;
        }
        ListNode *dummy = new ListNode(0);
        head = dummy;
        while(!s.empty())
        {
            head->next = s.top();
            head = head->next;
            s.pop();
        }
        return dummy->next;
    }
};