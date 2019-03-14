//Question : 9. Palindrome Number
//URL : https://leetcode.com/problems/palindrome-number/
//Approach : Convert the number into string
//Runtime :  ms (%)
//Memory Usage :  MB (%)
//Time complexity : O(n)
//Space complexity : O(1)

class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0 || (x % 10 == 0 && x != 0))    return false;
        int revertNum = 0;
        while(x > revertNum)
        {
            revertNum = revertNum * 10 + x % 10;
            x /= 10;
        }
        return revertNum == x || x == revertNum / 10;
    }
};