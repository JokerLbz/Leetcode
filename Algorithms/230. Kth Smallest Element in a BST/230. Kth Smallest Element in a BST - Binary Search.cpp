//Approach : Binary Search
//   √ 91/91 cases passed (28 ms)
//   √ Your runtime beats 81.94 % of cpp submissions
//   √ Your memory usage beats 83.99 % of cpp submissions (21.5 MB)
//T/S Complexity : O(h)/O(n)

class Solution {
private:
    int res = 0;
    int count;
    void KthSmallest(TreeNode* root)
    {
        if(!root)   return;
        KthSmallest(root->left);
        count--;
        if(count == 0)
            res = root->val;
        KthSmallest(root->right);
    }
public:
    int kthSmallest(TreeNode* root, int k) {
        this->count = k;
        KthSmallest(root);
        return res;
    }
};