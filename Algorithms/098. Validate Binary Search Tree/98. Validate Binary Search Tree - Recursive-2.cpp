//Approach : Recursive
//   √ 75/75 cases passed (28 ms)
//   √ Your runtime beats 19.75 % of cpp submissions
//   √ Your memory usage beats 21.53 % of cpp submissions (20.8 MB)
//T/S Complexity : O(nlog n)/O(n)

class Solution {
private:
    int getMin(TreeNode* root)
    {
        while(root->left)
            root = root->left;
        return root->val;
    }
    int getMax(TreeNode* root)
    {
        while(root->right)
            root = root->right;
        return root->val;
    }
public:
    bool isValidBST(TreeNode* root) {
        if(!root)   return true;
        if(root->left && root->val <= getMax(root->left))
            return false;
        if(root->right && root->val >= getMin(root->right))
            return false;
        return isValidBST(root->left) && isValidBST(root->right);
    }
};