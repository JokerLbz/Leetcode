//Question : 94. Binary Tree Inorder Traversal
//URL : https://leetcode.com/problems/binary-tree-inorder-traversal/
//Approach : Iteration (迭代)
//Runtime : 4 ms (100%)
//Memory Usage : 8.9 MB (97.23%)
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
    vector<int> inorderTraversal(TreeNode* root) {
        if(!root)   return vector<int>{};
        vector<int> res;
        stack<TreeNode*> s;
        s.push(root);
        while(!s.empty())
        {
            TreeNode* temp = s.top();
            if(temp -> left)
            {
                s.push(temp -> left);
                temp -> left = nullptr;
            }
            else
            {
                res.push_back(temp -> val);
                s.pop();
                if(temp -> right)
                    s.push(temp -> right);
            }
        }
        return res;
    }
};