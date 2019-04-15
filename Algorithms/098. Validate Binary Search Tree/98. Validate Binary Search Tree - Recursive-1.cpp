//Approach : O()/O()
//   √ 75/75 cases passed (20 ms)
//   √ Your runtime beats 99.07 % of cpp submissions
//   √ Your memory usage beats 47.74 % of cpp submissions (20.6 MB)
//T/S Complexity : O(n)/O(n)

class Solution {
public:
    bool isValidBST(TreeNode* root, TreeNode* minNode = nullptr, TreeNode* maxNode = nullptr) {
        if(!root)   return true;
        if(minNode && root->val <= minNode->val)   return false;
        if(maxNode && root->val >= maxNode->val)    return false;
        return isValidBST(root->left, minNode, root) && isValidBST(root->right, root, maxNode);
    }
};