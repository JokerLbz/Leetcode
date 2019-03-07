//Question : 145. Binary Tree Postorder Traversal
//URL : https://leetcode.com/problems/binary-tree-postorder-traversal/
//Approach : Iteration (迭代)
//Runtime :  ms (%)
//Memory Usage :  MB (%)
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
        if(!root)   return res;
        stack<TreeNode*> s;
        s.push(root);
        while(!s.empty())
        {
            TreeNode* temp = s.top();
            if(!temp -> left && !temp -> right)
            {
                res.push_back(temp -> val);
                s.pop();
            }
            else
            {
                if(temp -> right)
                {
                    s.push(temp -> right);
                    temp -> right = nullptr;
                }
                if(temp -> left)
                {
                    s.push(temp -> left);
                    temp -> left = nullptr;
                }
            }
        }
        return res;
    }
};