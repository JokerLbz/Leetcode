//Approach : Count by sort
//   √ 101/101 cases passed (40 ms)
//   √ Your runtime beats 98.34 % of cpp submissions
//   √ Your memory usage beats 92.69 % of cpp submissions (18.2 MB)
//T/S Complexity : O(n log n)/O(n)

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, int> m;
        vector<vector<string>> res;
        vector<string> cp(strs);
        for(int i = 0; i < strs.size(); i++)
        {
            sort(begin(strs[i]), end(strs[i]));
            if(m.find(strs[i]) != m.end())
                res[m[strs[i]]].push_back(cp[i]);
            else
            {
                m[strs[i]] = res.size();
                res.push_back(vector<string>(1, cp[i]));
            }
        }
        return res;
    }
};