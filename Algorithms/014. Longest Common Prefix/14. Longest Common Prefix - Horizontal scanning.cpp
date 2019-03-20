//Approach : Horizontal scanning
//   √ 118/118 cases passed (8 ms)
//   √ Your runtime beats 98.79 % of cpp submissions
//   √ Your memory usage beats 95.98 % of cpp submissions (9.3 MB)
//T/S Complexity : O(n)/O(1)    n is the number of all characters in array

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty())    return "";
        int min_len = INT_MAX;
        for(int i = 1; i < strs.size(); i++)
        {
            int count = 0;
            for(int j = 0; j < strs[i].size(); j++)
            {
                if(strs[0][j] == strs[i][j])
                    count++;
                else
                    break;
            }
            min_len = min_len < count ? min_len : count;
        }
        return strs[0].substr(0, min_len);
    }
};