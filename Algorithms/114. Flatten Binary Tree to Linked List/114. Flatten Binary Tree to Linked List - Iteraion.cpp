//Approach : Iteration
//   √ 225/225 cases passed (8 ms)
//   √ Your runtime beats 100 % of cpp submissions
//   √ Your memory usage beats 100 % of cpp submissions (9.6 MB)
//T/S Complexity : O(n)/O(1)

class Solution {
public:
    void flatten(TreeNode* root) {
        TreeNode* cur = root;
        while(cur)
        {
            if(cur->left)
            {
                TreeNode* temp = cur->left;
                while(temp->right)
                    temp = temp->right;
                temp->right = cur->right;
                cur->right = cur->left;
                cur->left = nullptr;
            }
            cur = cur->right;
        }
        return;
    }
};