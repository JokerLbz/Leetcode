//Approach : Iteration
//   √ 34/34 cases passed (96 ms)
//   √ Your runtime beats 96.87 % of cpp submissions
//   √ Your memory usage beats 99.54 % of cpp submissions (32.8 MB)
//T/S Complexity : O(log n)/O(1)

class Solution {
public:
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        TreeNode* cur = root;
        while(cur)
        {
            if(cur->val > val)
            {
                if(cur->left)
                    cur = cur->left;
                else
                {
                    cur->left = new TreeNode(val);
                    break;
                }
            }
            else
            {
                if(cur->right)
                    cur = cur->right;
                else
                {
                    cur->right = new TreeNode(val);
                    break;
                }
            }
        }
        return root;
    }
};