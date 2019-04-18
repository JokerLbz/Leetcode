//Approach : Iteration

//T/S Complexity : O(log n)/O(1)

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(!root)   return root;
        while(root)
        {
            if((p->val - root->val) * (q->val - root->val) <= 0)
                return root;
            else if(p->val < root->val)
                root = root->left;
            else
                root = root->right;
        }
        return root;
    }
};