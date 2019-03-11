//Question : 111. Minimum Depth of Binary Tree
//URL : https://leetcode.com/problems/minimum-depth-of-binary-tree/
//Approach : BFS (队列BFS)
//Runtime : 16 ms (99.69%)
//Memory Usage : 19.5 MB (88.73%)
//Time complexity : O(n)
//Space complexity : O(n)
//Reference : https://leetcode.com/problems/minimum-depth-of-binary-tree/discuss/36071/BFS-C%2B%2B-8ms-Beats-99.94-submissions

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
    int minDepth(TreeNode* root) {
        if(!root)   return 0;
        int res = 0;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty())
        {
            res++;
            int len = q.size();
            for(int i = 0; i < len; i++)
            {
                TreeNode* temp = q.front();
                if(!temp->left && !temp->right)
                    return res;
                if(temp->left)  q.push(temp->left);
                if(temp->right) q.push(temp->right);
                q.pop();
            }
        }
        return -1;
    }
};