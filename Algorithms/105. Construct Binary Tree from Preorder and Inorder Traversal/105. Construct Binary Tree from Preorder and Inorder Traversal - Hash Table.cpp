//Question : 105. Construct Binary Tree from Preorder and Inorder Traversal
//URL : https://leetcode.com/problems/construct-binary-tree-from-preorder-and-inorder-traversal/
//Approach : Recursive
//Runtime : 16 ms (99.58%)
//Memory Usage : 17.2 MB (34.60%)
//Time complexity : O(n)
//Space complexity : O(n)
//Reference : https://leetcode.com/problems/construct-binary-tree-from-preorder-and-inorder-traversal/discuss/34569/C%2B%2B-8911-lines-of-recursion

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
        unordered_map<int, int> m;
        for(int i = 0; i < inorder.size(); i++) m[inorder[i]] = i;
        return helper(preorder, 0, preorder.size() - 1, inorder, 0, inorder.size() - 1, m);
    }
    
    TreeNode* helper(vector<int>& pre, int pre_start, int pre_end, vector<int>& in, int in_start, int in_end, unordered_map<int, int>& m)
    {
        if(pre_start > pre_end)    return nullptr;
        int mid = m[pre[pre_start]];
        TreeNode* root = new TreeNode(pre[pre_start]);
        
        root->left = helper(pre, pre_start + 1, pre_start + mid - in_start, in, in_start, mid - 1, m);
        root->right = helper(pre, pre_start + mid - in_start + 1, pre_end, in, mid + 1, in_end, m);
        return root;
    }
    
};