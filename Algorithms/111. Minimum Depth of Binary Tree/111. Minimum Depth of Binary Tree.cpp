//Question : 111. Minimum Depth of Binary Tree
//URL : https://leetcode.com/problems/minimum-depth-of-binary-tree/
//Approach : Recursive (递归)
//Runtime : 16 ms (99.69%)
//Memory Usage : 20.1 MB (5%)
//Time complexity : O(n)
//Space complexity : O(n)
//Reference : https://leetcode.com/problems/minimum-depth-of-binary-tree/discuss/36060/3-lines-in-Every-Language

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
        int ld = minDepth(root->left), rd = minDepth(root->right);
        return 1 + (min(ld, rd) ? min(ld, rd) : max(ld, rd));
    }
};
