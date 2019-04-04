//Approach : Recursive
//   √ 227/227 cases passed (24 ms)
//   √ Your runtime beats 27.14 % of cpp submissions
//   √ Your memory usage beats 74.53 % of cpp submissions (17.2 MB)
//T/S Complexity : O(n)/O(n)

class Solution {
public:
    bool isBalanced(TreeNode* root) {
        return getDepth(root) != -1;
    }

    int getDepth(TreeNode* root)
    {
        if(!root)   return 0;
        int left = getDepth(root->left);
        if(left == -1)  return -1;
        int right = getDepth(root->right);
        if(right == -1) return -1;
        return abs(left - right) > 1 ? -1 : 1 + max(left, right);
    }
};