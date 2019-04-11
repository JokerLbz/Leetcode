//Approach : Iteration
//   √ 110/110 cases passed (12 ms)
//   √ Your runtime beats 19.31 % of cpp submissions
//   √ Your memory usage beats 45.86 % of cpp submissions (12.5 MB)
//T/S Complexity : O(n)/O(n)

class Solution {
public:
    int convertStrToInt(string s)
    {
        int res = 0;
        for(char c : s)
            res = res * 10 - '0' + c;
        return res;
    }
    int sumNumbers(TreeNode* root) {
        int res = 0;
        if(!root)   return res;
        string str;
        stack<TreeNode* > s;
        TreeNode* pre = nullptr;
        while(!s.empty() || root)
        {
            while(root)
            {
                str.push_back(root->val + '0');
                s.push(root);
                root = root->left;
            }
            root = s.top();
            if(root->right && root->right != pre)
                root = root->right;
            else
            {
                if(!root->left && !root->right)
                    res += convertStrToInt(str);
                str.pop_back();
                s.pop();
                pre = root;
                root = nullptr;
            }
        }
        return res;
    }
};