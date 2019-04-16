//Approach : Recursive
//   √ 225/225 cases passed (8 ms)
//   √ Your runtime beats 100 % of cpp submissions
//   √ Your memory usage beats 100 % of cpp submissions (9.6 MB)
//T/S Complexity : O(n)/O(n)

class Solution {
private:
    TreeNode* next = nullptr;
public:
    void flatten(TreeNode* root) {
        if(!root)   return;
        flatten(root->right);
        flatten(root->left);
        root->right = next;
        root->left = nullptr;
        next = root;
    }
};