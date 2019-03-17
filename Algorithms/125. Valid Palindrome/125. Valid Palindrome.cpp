//Aproach : Intuition
//  √ 476/476 cases passed (12 ms)
//  √ Your runtime beats 77.92 % of cpp submissions
//  √ Your memory usage beats 22.41 % of cpp submissions (9.3 MB)
//T/S Complexity : O(n) / O(1)

class Solution {
public:
    bool isPalindrome(string s) {
        if (s.empty())   return true;
        int start = 0, end = s.size() - 1;
        while(start < end)
        {
            while(!isalnum(s[start]) && start < end)
                start++;
            while(!isalnum(s[end]) && start < end)
                end--;
            if(tolower(s[start++]) != tolower(s[end--]))
                return false;
        }
        return true;
    }
};