//Approach : Recursive
//   √ 193/193 cases passed (12 ms)
//   √ Your runtime beats 96.51 % of cpp submissions
//   √ Your memory usage beats 47.11 % of cpp submissions (16 MB)
// T/S Complexity : O(n)/O(n)

class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        if(!root)   return true;
        return symmetric_recursive(root->left, root->right);
    }

    bool symmetric_recursive(TreeNode* t1, TreeNode* t2)
    {
        if(!t1 || !t2)  return t1 == t2;
        return t1->val == t2->val && symmetric_recursive(t1->left, t2->right) && symmetric_recursive(t1->right, t2->left);
    }

};