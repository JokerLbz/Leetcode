//Question : 104. Maximum Depth of Binary Tree
//URL : https://leetcode.com/problems/maximum-depth-of-binary-tree/
//Approach : Recursive
//Runtime : 24 ms (10.88%)
//Memory Usage : 19.4 MB (57.21%)
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
    int maxDepth(TreeNode* root) {
        if(!root)   return 0;
        return 1 + max(maxDepth(root->left), maxDepth(root->right));
    }
};