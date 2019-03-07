//Question : 145. Binary Tree Postorder Traversal
//URL : https://leetcode.com/problems/binary-tree-postorder-traversal/
//Approach : Morris Traversal (莫里斯遍历)
//Runtime : 4 ms (100%)
//Memory Usage : 8.7 MB (99.43%)
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
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> res;
        while(root)
        {
            if(root -> right)
            {
                TreeNode *temp_head = root -> right, *temp = temp_head;
                while(temp -> left)
                    temp = temp -> left;
                root -> right = nullptr;
                temp -> left = root -> left;
                root -> left = temp_head;
            }
            else
            {
                res.push_back(root -> val);
                root = root -> left;
            }
        }
        reverse(res.begin(), res.end());
        return res;
    }
};