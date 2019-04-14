//Approach : Iteration
//   √ 12/12 cases passed (64 ms)
//   √ Your runtime beats 81.81 % of cpp submissions
//   √ Your memory usage beats 25.52 % of cpp submissions (27.3 MB)
//T/S Complexity : O(n)/O(n)

class Solution {
public:
    Node* connect(Node* root) {
        if(!root || !root->left)   return root;
        queue<Node*> q;
        q.push(root);
        while(!q.empty())
        {
            Node* pre = nullptr;
            int size = q.size();
            for(int i = 0; i < size; i++)
            {
                Node* node = q.front();
                q.pop();
                if(pre) pre->next = node;
                pre = node;
                if(node->left)
                    q.push(node->left);
                if(node->right)
                    q.push(node->right);
            }
        }
        return root;
    }
};