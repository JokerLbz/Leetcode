//Approach : Recursive
//   √ 36/36 cases passed (60 ms)
//   √ Your runtime beats 93.68 % of cpp submissions
//   √ Your memory usage beats 99.58 % of cpp submissions (28.9 MB)
//T/S Complexity : O(log n)/O(log n)

class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        if(!root)   return root;
        if(root->val == val)
            return root;
        return root->val > val ? searchBST(root->left, val) : searchBST(root->right, val);
    }
};