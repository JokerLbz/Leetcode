//Approach : Backtrackint
//   √ 114/114 cases passed (20 ms)
//   √ Your runtime beats 73.71 % of cpp submissions
//   √ Your memory usage beats 49.63 % of cpp submissions (20.2 MB)
//T/S Complexity : O(n)/O(n)

class Solution {
    vector<vector<int>> res;
    void findPath(TreeNode* root, int sum, vector<int>& path)
    {
        if(!root)   return;
        path.push_back(root->val);
        if(!root->left && !root->right && sum == root->val)
            res.push_back(path);
        findPath(root->left, sum - root->val, path);
        findPath(root->right, sum - root->val, path);
        path.pop_back();
    }
public:
    vector<vector<int>> pathSum(TreeNode* root, int sum) {
        vector<int> path;
        findPath(root, sum, path);
        return res;
    }
};