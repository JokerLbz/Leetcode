//Approach : Count
//   √ 101/101 cases passed (52 ms)
//   √ Your runtime beats 63.77 % of cpp submissions
//   √ Your memory usage beats 18.84 % of cpp submissions (22.1 MB)
//T/S Complexity : O(n)/O(n)

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;
        unordered_map<string, vector<string>> m;
        for(string s : strs)
            m[count(s)].push_back(s);
        for(unordered_map<string, vector<string>>::iterator it = m.begin(); it != m.end(); it++)
            res.push_back(it->second);
        return res;
    }

    string count(string s)
    {
        string res = "";
        vector<int> table(26, 0);
        for(char c : s)
            table[c - 'a']++;
        for(int i = 0; i < 26; i++)
            res += string(table[i], i + 'a');
        return res;
    }
};