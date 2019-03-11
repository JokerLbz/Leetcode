//Question : 111. Minimum Depth of Binary Tree
//URL : https://leetcode.com/problems/minimum-depth-of-binary-tree/
//Approach : DFS (栈DFS)
//Runtime : 16 ms (99.69%)
//Memory Usage :  MB (%)
//Time complexity : O(n)
//Space complexity : O(n)
//Reference : https://leetcode.com/problems/minimum-depth-of-binary-tree/discuss/36186/C%2B%2B-non-recursive-and-recursive-DFS-backtracking-postorder-solution-12ms

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
    int minDepth(TreeNode *root)
    {
        if (!root)
            return 0;
        stack<TreeNode *> s;
        s.push(root);
        root = root->left;
        int res = INT_MAX, depth = 1;
        TreeNode* prev = nullptr;
        while (!s.empty())
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
                if(!top_node->left && !top_node->right)
                    res = min(depth, res);
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