//Approach : Vertical scanning
//   √ 118/118 cases passed (8 ms)
//   √ Your runtime beats 98.79 % of cpp submissions
//   √ Your memory usage beats 85.01 % of cpp submissions (9.4 MB)
//T/S Complexity : O(n)/O(1)    n is the number of all characters in array

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty())    return "";
        int n = strs.size();
        int min_len = INT_MAX;
        for(int i = 0; i < n; i++)
            if(strs[i].size() < min_len)
                min_len = strs[i].size();
        for(int i = 0; i < min_len; i++)
        {
            char c = strs[0][i];
            for(int j = 1; j < n; j++)
            {
                if(strs[j][i] != c)
                    return strs[0].substr(0, i);
            }
        }
        return strs[0].substr(0, min_len);
    }
};