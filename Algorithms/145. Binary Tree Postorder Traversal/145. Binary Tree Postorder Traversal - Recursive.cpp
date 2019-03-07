//Question : 145. Binary Tree Postorder Traversal
//URL : https://leetcode.com/problems/binary-tree-postorder-traversal/
//Approach : Recursive (递归)
//Runtime : 4 ms (100%)
//Memory Usage : 9.3 MB (56.09%)
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
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> res;
        postorder(res, root);
        return res;
    }
    
    void postorder(vector<int>& res, TreeNode* root)
    {
        if(!root)   return;
        postorder(res, root -> left);
        postorder(res, root -> right);
        res.push_back(root -> val);
    }
};