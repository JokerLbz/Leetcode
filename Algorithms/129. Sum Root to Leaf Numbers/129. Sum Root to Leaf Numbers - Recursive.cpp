//Approach : Recursive
//   √ 110/110 cases passed (8 ms)
//   √ Your runtime beats 80.91 % of cpp submissions
//   √ Your memory usage beats 75.16 % of cpp submissions (12.4 MB)
//T/S Complexity : O(n)/O(n)

class Solution {
private:
    int res = 0;
    void getPath(TreeNode* root, int val)
    {
        if(!root->left && !root->right)
        {
            res += val * 10 + root->val;
            return;
        }
        if(root->left)
            getPath(root->left, val * 10 + root->val);
        if(root->right)
            getPath(root->right, val * 10 + root->val);
    }
public:
    int sumNumbers(TreeNode* root) {
        if(root)    getPath(root, 0);
        return res;
    }
};