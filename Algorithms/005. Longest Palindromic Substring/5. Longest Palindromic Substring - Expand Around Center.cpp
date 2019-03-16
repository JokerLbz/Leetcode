//Question : 5. Longest Palindromic Substring
//URL : https://leetcode.com/problems/longest-palindromic-substring/
//Approach : Expand Around Center
//Runtime : 8 ms (99.42%)
//Memory Usage : 9.2 MB (95.47%)
//Time complexity : O(n^2)
//Space complexity : O(1)

class Solution {
public:
    string longestPalindrome(string s) {
        int len = s.size();
        if(len < 2) return s;
        int min_start = 0, min_length = 1;
        int j, k;
        for(int i = 0; i < len; )
        {
            if(len - min_start < min_length / 2)    break;
            j = k = i;
            while(k < len - 1 && s[k + 1] == s[k])
                k++;
            i = k + 1;
            while(k < len - 1 && j > 0 && s[k + 1] == s[j - 1])
            {
                j--;
                k++;
            }
            if(k - j + 1 > min_length)
            {
                min_start = j;
                min_length = k - j + 1;
            }
        }
        return s.substr(min_start, min_length);
    }
};