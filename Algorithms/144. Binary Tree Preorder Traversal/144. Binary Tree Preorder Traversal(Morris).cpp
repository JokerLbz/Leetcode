//Question : 144. Binary Tree Preorder Traversal
//URL : https://leetcode.com/problems/binary-tree-preorder-traversal/
//Approach : Morris Traversal (莫里斯遍历)
//Runtime : 4 ms (100%)
//Memory Usage : 8.7 MB (99.77%)
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
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> res;
        while(root)
        {
            if(root -> left)
            {
                TreeNode* temp = root -> left, *temp_head = temp;
                while(temp -> right)
                    temp = temp -> right;
                temp -> right = root -> right;
                root -> right = temp_head;
                root -> left = nullptr;
            }
            res.push_back(root -> val);
            root = root -> right;
        }
        return res;
    }
};