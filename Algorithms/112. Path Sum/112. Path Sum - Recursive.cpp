//Approach : Recursive
//   √ 114/114 cases passed (16 ms)
//   √ Your runtime beats 99.69 % of cpp submissions
//   √ Your memory usage beats 32.83 % of cpp submissions (19.9 MB)
//T/S Complexity : O(n)/O(n)

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool hasPathSum(TreeNode* root, int sum) {
        if(!root)   return false;
        if(!root->left && !root->right) return sum == root->val;
        return hasPathSum(root->left, sum - root->val) || hasPathSum(root->right, sum - root->val);
    }
};