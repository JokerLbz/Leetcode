//Question : 111. Minimum Depth of Binary Tree
//URL : https://leetcode.com/problems/minimum-depth-of-binary-tree/
//Approach : Recursive (递归)
//Runtime : 16 ms (99.69%)
//Memory Usage : 20 MB (21.09%)
//Time complexity : O(n)
//Space complexity : O(n)

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
    int minDepth(TreeNode* root) {
        if(!root)   return 0;
        if(root->left && root->right)   return 1 + min(minDepth(root->left), minDepth(root->right));
        if(root->left)  return 1 + minDepth(root->left);
        return 1 + minDepth(root->right);
    }
};