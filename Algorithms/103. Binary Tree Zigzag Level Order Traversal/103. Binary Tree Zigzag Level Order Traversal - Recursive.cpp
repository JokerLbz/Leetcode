//Approach : Recursive
//   √ 33/33 cases passed (8 ms)
//   √ Your runtime beats 100 % of cpp submissions
//   √ Your memory usage beats 6.04 % of cpp submissions (14.4 MB)
//T/S Complexity : O(n)/O(n)

class Solution {
private:
    vector<vector<int>> res;
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        help(root, 0);
        for(int i = 1; i < res.size(); i += 2)
            reverse(res[i].begin(), res[i].end());
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