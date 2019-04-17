//Approach : Iteration
//   √ 85/85 cases passed (32 ms)
//   √ Your runtime beats 99.3 % of cpp submissions
//   √ Your memory usage beats 100 % of cpp submissions (12.7 MB)
//T/S Complexity : O(log n)/O(1)
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* deleteNode(TreeNode* root, int key) {
        TreeNode* ance = nullptr, *cur = root;
        //find
        while(cur)
        {
            if(cur->val == key)
                break;
            ance = cur;
            cur = cur->val > key ? cur->left : cur->right;
        }
        //unable to find
        if(!cur)    return root;
        bool left = ance && cur == ance->left;
        //delete
        //right = left = nullptr
        if(cur->left == cur->right)
            cur = nullptr;
        else if(!cur->left || !cur->right)
            cur = cur->left ? cur->left : cur->right;
        //child both exist
        else
        {
            //return cur;
            TreeNode* temp = cur->right, *temp_ance = nullptr;
            while(temp->left)
            {
                temp_ance = temp;
                temp = temp->left;
            }

            temp->left = cur->left;
            
            if(temp_ance)
            {
                temp_ance->left = temp->right;
                temp->right = cur->right;
            }
            cur = temp;
        }
        //key == root->val
        if(!ance)   return cur;
        if(left)    ance->left = cur;
        else    ance->right = cur;
        return root;
    }
};