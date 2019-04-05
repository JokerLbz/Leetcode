//Approach : Recursive
//   √ 203/203 cases passed (28 ms)
//   √ Your runtime beats 44.39 % of cpp submissions
//   √ Your memory usage beats 39.75 % of cpp submissions (17.3 MB)
//T/S Complexity : O(n)/O(n)

class Solution {
private:
    unordered_map<int, int> m;
public:
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        for(int i = 0; i < inorder.size(); i++)
            m[inorder[i]] = i;
        return help(inorder, 0, inorder.size() - 1, postorder, 0, postorder.size() - 1);
    }
    TreeNode* help(vector<int>& in, int i_left, int i_right, vector<int>& post, int p_left, int p_right)
    {
        if(i_left > i_right)    return nullptr;
        TreeNode* root = new TreeNode(post[p_right]);
        int root_index = m[post[p_right]];
        root->left = help(in, i_left, root_index - 1, post, p_left, p_left + root_index - i_left - 1);
        root->right = help(in, root_index + 1, i_right, post, p_left + root_index - i_left, p_right - 1);
        return root;
    }
};