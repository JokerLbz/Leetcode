//Approach : Inorder Traversal
//   √ 75/75 cases passed (20 ms)
//   √ Your runtime beats 99.07 % of cpp submissions
//   √ Your memory usage beats 42.75 % of cpp submissions (20.6 MB)
//T/S Complexity : O(n)/O(n)

class Solution {
public:
    bool isValidBST(TreeNode* root) {
        long pre = LONG_MIN;
        stack<TreeNode*> s;
        TreeNode* cur = root;
        while(cur || !s.empty())
        {
            while(cur)
            {
                s.push(cur);
                cur = cur->left;
            }
            cur = s.top();
            s.pop();
            if(cur->val <= pre)
                return false;
            pre = cur->val;
            cur = cur->right;
        }
        return true;
    }
};