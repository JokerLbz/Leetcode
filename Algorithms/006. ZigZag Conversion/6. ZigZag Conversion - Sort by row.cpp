//Approach : Sort by row
//   √ 1158/1158 cases passed (36 ms)
//   √ Your runtime beats 31.91 % of cpp submissions
//   √ Your memory usage beats 26.77 % of cpp submissions (19.4 MB)
// T/S Complexity : O(n)/O(n)
//Reference : Solution 1

class Solution {
public:
    string convert(string s, int numRows) {
        if(s.empty() || numRows == 1 || numRows > s.size()) return s;
        vector<string> vec(min((int)s.size(), numRows));
        int cur_row = 0;
        bool up_to_down = true;
        for(char c : s)
        {
            vec[cur_row] += c;
            cur_row += up_to_down ? 1 : -1;
            if(cur_row == numRows - 1 || cur_row == 0)  up_to_down = !up_to_down;
        }
        string res = "";
        for(string str : vec)
            res += str;
        return res;
    }
};