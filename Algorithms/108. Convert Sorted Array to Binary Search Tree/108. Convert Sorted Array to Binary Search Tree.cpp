//Approach : Recursion
//   √ 32/32 cases passed (20 ms)
//   √ Your runtime beats 100 % of cpp submissions
//   √ Your memory usage beats 57.57 % of cpp submissions (21.1 MB)
//T/S Complexity : O(n)/O(n)

class Solution {
private:
    TreeNode* help(vector<int>& nums, int start, int end)
    {
        TreeNode* root = nullptr;
        if(start > end) return root;
        int mid = start + (end - start) / 2;
        root = new TreeNode(nums[mid]);
        root->left = help(nums, start, mid - 1);
        root->right = help(nums, mid + 1, end);
        return root;
    }
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return help(nums, 0, nums.size() - 1);
    }
};