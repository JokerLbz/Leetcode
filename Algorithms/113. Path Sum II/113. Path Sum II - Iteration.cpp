//Approach : Iteration
//   √ 114/114 cases passed (16 ms)
//   √ Your runtime beats 99.97 % of cpp submissions
//   √ Your memory usage beats 98.91 % of cpp submissions (18.8 MB)
//T/S Complexity : O(n)/O(n)

class Solution {
public:
    vector<vector<int>> pathSum(TreeNode* root, int sum) {
        vector<vector<int>> res;
        if(!root)   return res;
        vector<TreeNode* > s;
        vector<int> val;
        TreeNode* cur = root;
        TreeNode* pre = nullptr;
        int temp_sum = 0;
        while(cur || !s.empty())
        {
            while(cur)
            {
                s.push_back(cur);
                val.push_back(cur->val);
                temp_sum += cur->val;
                cur = cur->left;
            }
            cur = s.back();
            if(cur->right && cur->right != pre)
                cur = cur->right;
            else
            {
                if(!cur->right && !cur->left && sum == temp_sum)
                    res.push_back(val);
                pre = cur;
                temp_sum -= cur->val;
                val.pop_back();
                s.pop_back();
                cur = nullptr;
            }
        }
        return res;
    }
};