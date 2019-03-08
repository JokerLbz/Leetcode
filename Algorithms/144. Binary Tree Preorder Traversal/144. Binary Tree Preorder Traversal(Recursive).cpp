//Question : 144. Binary Tree Preorder Traversal
//URL : https://leetcode.com/problems/binary-tree-preorder-traversal/
//Approach : Recursive (递归)
//Runtime : 4 ms (100%)
//Memory Usage : 9.4 MB (28.47%)
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
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> res;
        preorder(res, root);
        return res;
    }
    void preorder(vector<int>& res, TreeNode* root)
    {
        if(!root)   return;
        res.push_back(root -> val);
        preorder(res, root -> left);
        preorder(res, root -> right);
    }
};