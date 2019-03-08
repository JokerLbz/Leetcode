//Question : 144. Binary Tree Preorder Traversal
//URL : https://leetcode.com/problems/binary-tree-preorder-traversal/
//Approach : Iteration (迭代)
//Runtime : 4 ms (100%)
//Memory Usage : 9.4 MB (32.57%)
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
        if(!root)   return res;
        stack<TreeNode*> s;
        s.push(root);
        while(!s.empty())
        {
            TreeNode* temp = s.top();
            res.push_back(temp -> val);
            s.pop();
            if(temp -> right)
                s.push(temp -> right);
            if(temp -> left)
                s.push(temp -> left);
        }
        return res;
    }
};