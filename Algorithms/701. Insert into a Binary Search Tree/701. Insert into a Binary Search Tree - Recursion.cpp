//Approach : Recursion
//   √ 34/34 cases passed (96 ms)
//   √ Your runtime beats 96.87 % of cpp submissions
//   √ Your memory usage beats 93.09 % of cpp submissions (32.9 MB)
//T/S Complexity : O(log n)/O(log n)

class Solution {
public:
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(!root)   
            return new TreeNode(val);
        if(val < root->val)
            root->left = insertIntoBST(root->left, val);
        else
            root->right = insertIntoBST(root->right, val);
        return root;
    }
};