//Approach : Recursion
//   √ 27/27 cases passed (56 ms)
//   √ Your runtime beats 14.62 % of cpp submissions
//   √ Your memory usage beats 30.77 % of cpp submissions (25.9 MB)
//T/S Comlexity : O(log n)/O(log n)

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(!root || (root->val - p->val) * (root->val - q->val) <= 0)
            return root;
        if(p->val < root->val)
            root = lowestCommonAncestor(root->left, p, q);
        else
            root = lowestCommonAncestor(root->right, p, q);
        return root;
    }
};