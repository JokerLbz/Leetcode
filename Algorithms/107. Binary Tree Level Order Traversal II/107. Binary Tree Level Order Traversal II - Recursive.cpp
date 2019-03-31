//Approach : Recursive
//   √ 34/34 cases passed (8 ms)
//   √ Your runtime beats 100 % of cpp submissions
//   √ Your memory usage beats 19.18 % of cpp submissions (14.9 MB)
//T/S Complexity : O(n)/O(n)

class Solution {
private:
    vector<vector<int> > res;
public:
    void levelOrder(TreeNode* root, int level)
    {
        if(!root)   return;
        if(level == res.size())
            res.push_back(vector<int>());
        res[level].push_back(root->val);
        levelOrder(root->left, level + 1);
        levelOrder(root->right, level + 1);
    }
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        levelOrder(root, 0);
        //reverse(res.begin(), res.end());
        return vector<vector<int> >(res.rbegin(), res.rend());
    }
};