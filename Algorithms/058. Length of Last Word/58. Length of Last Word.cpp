//Approach : Intuition
//   √ 59/59 cases passed (4 ms)
//   √ Your runtime beats 100 % of cpp submissions
//   √ Your memory usage beats 100 % of cpp submissions (8.7 MB)
//T/S Complexity : O(n)/O(1)

class Solution {
public:
    int lengthOfLastWord(string s) {
        string temp;
        for(int i = s.size() - 1; i >= 0; i--)
            if(s[i] != ' ')
            {
                s = s.substr(0, i + 1);
                break;
            }
        int index;
        for(index = s.size() - 1; index >= 0; index--)
            if(s[index] == ' ')
                return s.size() - index - 1;
        return s.size();
    }
};