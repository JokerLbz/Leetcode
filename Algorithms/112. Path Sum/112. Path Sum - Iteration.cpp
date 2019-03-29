//Approach : Iteration
//   √ 114/114 cases passed (20 ms)
//   √ Your runtime beats 50.35 % of cpp submissions
//   √ Your memory usage beats 57.07 % of cpp submissions (19.9 MB)
//T/S Complexity : O(n)/O(n)

class Solution {
public:
    bool hasPathSum(TreeNode* root, int sum) {
        if(!root)   return false;
        stack<TreeNode* > s;
        int tmp_sum = 0;
        TreeNode* cur = root, *pre = nullptr;
        while(cur || !s.empty())
        {
            while(cur)
            {
                s.push(cur);
                tmp_sum += cur->val;
                cur = cur->left;
            }
            cur = s.top();
            if(!cur->left && !cur->right && tmp_sum == sum)
                return true;
            if(cur->right && cur->right != pre)
                cur = cur->right;
            else
            {
                pre = cur;
                s.pop();
                tmp_sum -= cur->val;
                cur = nullptr;
            }
        }
        return false;
    }
};