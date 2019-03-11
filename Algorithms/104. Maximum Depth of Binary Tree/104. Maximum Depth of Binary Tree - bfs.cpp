//Question : 104. Maximum Depth of Binary Tree
//URL : https://leetcode.com/problems/maximum-depth-of-binary-tree/
//Approach : BFS-queue
//Runtime : 16 ms (99.23%)
//Memory Usage : 19.3 MB (72.92%)
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
        queue<TreeNode*> q;
        q.push(root);
        int res = 0, depth = 0;
        while(!q.empty())
        {
            depth++;
            res = depth > res ? depth : res;
            int len = q.size();
            for(int i = 0; i < len; i++)
            {
                TreeNode* temp = q.front();
                q.pop();
                if(temp->left)  q.push(temp->left);
                if(temp->right) q.push(temp->right);
            }
        }
        return res;
    }
};