//Approach : Iteration
//   √ 34/34 cases passed (8 ms)
//   √ Your runtime beats 100 % of cpp submissions
//   √ Your memory usage beats 86.22 % of cpp submissions (13.7 MB)
//T/S Complexity : O(n)/O(n)

class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int> > res;
        if(!root)   return res;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty())
        {
            int size = q.size();
            vector<int> temp_res;
            for(int i = 0; i < size; i++)
            {
                TreeNode* node = q.front();
                q.pop();
                temp_res.push_back(node->val);
                if(node->left)  q.push(node->left);
                if(node->right) q.push(node->right);
            }
            res.push_back(temp_res);
        }
        return res;
    }
};