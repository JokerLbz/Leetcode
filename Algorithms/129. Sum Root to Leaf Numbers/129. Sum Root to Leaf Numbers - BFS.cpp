//Approach : BFS
//   √ 110/110 cases passed (16 ms)
//   √ Your runtime beats 19.31 % of cpp submissions
//   √ Your memory usage beats 22.29 % of cpp submissions (12.6 MB)
//T/S Complexity : O(n)/O(n)

class Solution {
public:
    int sumNumbers(TreeNode* root) {
        int res = 0;
        queue<TreeNode* > tree_q;
        queue<int> val_q;
        if(!root)   return res;
        tree_q.push(root);
        val_q.push(0);
        while(!tree_q.empty())
        {
            TreeNode* node = tree_q.front();
            tree_q.pop();
            int val = val_q.front() * 10 + node->val;
            cout << val << endl;
            val_q.pop();
            if(!node->left && !node->right)
            {
                res += val;
                continue;
            }
            if(node->left)
            {
                tree_q.push(node->left);
                val_q.push(val);
            }
            if(node->right)
            {
                tree_q.push(node->right);
                val_q.push(val);
            }
        }
        return res;
    }
};