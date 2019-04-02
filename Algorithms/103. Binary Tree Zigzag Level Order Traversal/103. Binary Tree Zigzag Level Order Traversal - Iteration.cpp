//Approach : Iteration
//   √ 33/33 cases passed (8 ms)
//   √ Your runtime beats 100 % of cpp submissions
//   √ Your memory usage beats 41.61 % of cpp submissions (13.6 MB)
//T/S Complexity : O(n)/O(n)

class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int> > res;
        if(!root)   return res;
        queue<TreeNode* > q;
        bool reverse_flag = false;
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
            if(reverse_flag)
                reverse(temp_res.begin(), temp_res.end());
            reverse_flag = !reverse_flag;
            res.push_back(temp_res);
        }
        return res;
    }
};