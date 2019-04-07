//Approach : Iteration
//T/S Complexity : O(n)/O(n)

class Solution {
public:
    int stringToInt(string s)
    {
        int res = 0, pow = 1;
        for(int i = s.size() - 1; i >= 0; i--)
        {
            if(s[i] == '1')
                res += pow;
            pow *= 2;
        }
        return res;
    }
    int sumRootToLeaf(TreeNode* root) {
        if(!root)   return 0;
        vector<int> vec;
        stack<TreeNode*> s;
        string str;
        TreeNode* pre = nullptr;
        while(!s.empty() || root)
        {
            while(root)
            {
                s.push(root);
                str.push_back(root->val + '0');
                root = root->left;
            }
            root = s.top();
            if(root->right && root->right != pre)
                root = root->right;
            else
            {
                if(!root->right && !root->left)
                    vec.push_back(stringToInt(str));
                s.pop();
                str.pop_back();
                pre = root;
                root = nullptr;
            }
        }
        return accumulate(vec.begin(), vec.end(), 0);
    }
};