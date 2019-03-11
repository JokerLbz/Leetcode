//Question : 104. Maximum Depth of Binary Tree
//URL : https://leetcode.com/problems/maximum-depth-of-binary-tree/
//Approach : BFS-queue
//Runtime : 16 ms (99.23%)
//Memory Usage : 19.2 MB (81.57%)
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
        stack<TreeNode*> s;
        s.push(root);
        root = root->left;
        int res = 0, depth = 1;
        TreeNode* prev = nullptr;
        while(!s.empty())
        {
            while(root)
            {
                depth++;
                s.push(root);
                root = root->left;
            }
            
            TreeNode* top_node = s.top();
            if(!top_node->right || top_node->right == prev)
            {
                res = depth > res ? depth : res;
                depth--;
                s.pop();
                prev = top_node;
            }
            else
                root = top_node->right;
        }
        return res;
    }
};