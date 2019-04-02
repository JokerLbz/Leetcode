//Approach : Recursive
//   √ 34/34 cases passed (8 ms)
//   √ Your runtime beats 100 % of cpp submissions
//   √ Your memory usage beats 14.85 % of cpp submissions (15 MB)
//T/S Complexity : O(n)/O(n)

class Solution {
private:
    vector<vector<int> > res;
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        help(root, 0);
        return res;
    }
    void help(TreeNode* root, int level)
    {
        if(!root)   return;
        if(res.size() <= level)
            res.push_back(vector<int>());
        res[level].push_back(root->val);
        help(root->left, level + 1);
        help(root->right, level + 1);
    }
};