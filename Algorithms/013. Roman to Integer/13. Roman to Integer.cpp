//Approach : DP
//   √ 3999/3999 cases passed (28 ms)
//   √ Your runtime beats 94.12 % of cpp submissions
//   √ Your memory usage beats 97.97 % of cpp submissions (10.6 MB)
//T/S Complexity : O(n)/O(1)

class Solution {
public:
    int romanToInt(string s) {
        map<char, int>  table;
        table['I'] = 1;
        table['V'] = 5;
        table['X'] = 10;
        table['L'] = 50;
        table['C'] = 100;
        table['D'] = 500;
        table['M'] = 1000;
        int res = 0;
        for(int i = 0; i < s.size() - 1; i++)
        {
            if(table[s[i]] < table[s[i + 1]])
                res -= table[s[i]];
            else
                res += table[s[i]];
        }
        res += table[s.back()];
        return res;
    }
};