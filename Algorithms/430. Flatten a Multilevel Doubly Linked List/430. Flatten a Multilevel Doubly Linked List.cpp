//Approach : Iteration
//   √ 22/22 cases passed (104 ms)
//   √ Your runtime beats 84.98 % of cpp submissions
//   √ Your memory usage beats 63 % of cpp submissions (31 MB)
//T/S Complexity : O(n)/O(1)

class Solution {
public:
    Node* flatten(Node* head) {
        Node* cur = head;
        while(cur)
        {
            if(cur->child)
            {
                Node* child_head = cur->child;
                while(child_head->next)
                    child_head = child_head->next;
                child_head->next = cur->next;
                if(child_head->next)
                    child_head->next->prev = child_head;
                cur->next = cur->child;
                cur->next->prev = cur;
                cur->child = nullptr;
            }
            cur = cur->next;
        }
        return head;
    }
};