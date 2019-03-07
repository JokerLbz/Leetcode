//Question : 94. Binary Tree Inorder Traversal
//URL : https://leetcode.com/problems/binary-tree-inorder-traversal/
//Approach : Morris Traversal (莫里斯遍历)
//Runtime : 4 ms (100%)
//Memory Usage : 8.7 MB (98.69%)
//Time complexity : O(n)
//Space complexity : O(1)

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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> res;
        if(!root)   return res;
        while(root)
        {
            if(root -> left)
            {
                TreeNode* temp = root -> left, *temp_root = temp;
                while(temp -> right)
                    temp = temp -> right;
                temp -> right = root;
                root -> left = nullptr;
                root = temp_root;
            }
            else
            {
                res.push_back(root -> val);
                root = root -> right;
            }
        }
        return res;
    }
};