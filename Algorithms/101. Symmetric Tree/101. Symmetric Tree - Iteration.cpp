//Approach : Iteration
//   √ 193/193 cases passed (16 ms)
//   √ Your runtime beats 36.72 % of cpp submissions
//   √ Your memory usage beats 56.86 % of cpp submissions (15.9 MB)
// T/S Complexity : O(n)/O(n)

class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        if(!root)   return true;
        queue<TreeNode* > q;
        q.push(root->left);
        q.push(root->right);
        while(!q.empty())
        {
            TreeNode* t1 = q.front();   q.pop();  
            TreeNode* t2 = q.front();   q.pop();
            if(!t1 && !t2)  continue;
            if(!t1 || !t2)  return false;
            if(t1->val != t2->val)  return false;
            q.push(t1->left);
            q.push(t2->right);
            q.push(t1->right);
            q.push(t2->left);  
        }
        return true;
    }
};