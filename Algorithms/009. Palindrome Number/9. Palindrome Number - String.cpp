//Question : 9. Palindrome Number
//URL : https://leetcode.com/problems/palindrome-number/
//Approach : Convert the number into string
//Runtime : 124 ms (62.27%)
//Memory Usage : 73 MB (74.39%)
//Time complexity : O(n)
//Space complexity : O(n)

class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0)  return false;
        string s;
        while(x > 0)
        {
            s += '0' + x % 10;
            x /= 10;
        }
        int start = 0, end = s.size() - 1;
        while(start <= end)
        {
            if(s[start++] != s[end--])
                return false;
        }
        return true;
    }
};