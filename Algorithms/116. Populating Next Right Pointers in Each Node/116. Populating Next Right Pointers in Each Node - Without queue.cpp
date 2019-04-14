//Approach : Iteration whihout queue
//   √ 12/12 cases passed (64 ms)
//   √ Your runtime beats 81.81 % of cpp submissions
//   √ Your memory usage beats 43.33 % of cpp submissions (27.1 MB)
//T/S Complexity : O(n)/O(1)

class Solution {
public:
    Node* connect(Node* root) {
        if(!root)   return root;
        Node* cur = root;
        while(cur->left)
        {
            Node* node = cur;
            while(node)
            {
                node->left->next = node->right;
                if(node->next)
                    node->right->next = node->next->left;
                node = node->next;
            }
            cur = cur->left;
        }
        return root;
    }
};