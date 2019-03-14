//Question : 105. Construct Binary Tree from Preorder and Inorder Traversal
//URL : https://leetcode.com/problems/construct-binary-tree-from-preorder-and-inorder-traversal/
//Approach : Recursive
//Runtime : 24 ms (82.15%)
//Memory Usage : 18.2 MB (25.95%)
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
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        return helper(preorder, 0, preorder.size() - 1, inorder, 0, inorder.size() - 1);
    }
    
    TreeNode* helper(vector<int>& pre, int pre_start, int pre_end, vector<int>& in, int in_start, int in_end)
    {
        if(pre_start > pre_end)    return nullptr;
        int mid = find(in.begin(), in.end(), pre[pre_start]) - in.begin();
        TreeNode* root = new TreeNode(pre[pre_start]);
        
        root->left = helper(pre, pre_start + 1, pre_start + mid - in_start, in, in_start, mid - 1);
        root->right = helper(pre, pre_start + mid - in_start + 1, pre_end, in, mid + 1, in_end);
        return root;
    }
};