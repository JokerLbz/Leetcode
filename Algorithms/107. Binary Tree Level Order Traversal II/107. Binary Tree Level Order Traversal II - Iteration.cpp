//Approach : Iteration
//   √ 34/34 cases passed (8 ms)
//   √ Your runtime beats 100 % of cpp submissions
//   √ Your memory usage beats 95.43 % of cpp submissions (13.7 MB)
//T/S Complexity : O(n)/O(n)

class Solution {
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int> > res;
        if(!root)   return res;
        queue<TreeNode* > q;
        q.push(root);
        while(!q.empty())
        {
            int size = q.size();
            res.push_back(vector<int>());
            for(int i = 0; i < size; i++)
            {
                TreeNode* node = q.front();
                res.back().push_back(node->val);
                q.pop();
                if(node->left)  q.push(node->left);
                if(node->right) q.push(node->right);
            }
        }
        reverse(res.begin(), res.end());
        return res;
    }
};