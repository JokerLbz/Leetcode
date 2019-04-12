//Approach : Hash Table
//   √ 3999/3999 cases passed (16 ms)
//   √ Your runtime beats 95.19 % of cpp submissions
//   √ Your memory usage beats 99.14 % of cpp submissions (8.4 MB)
//T/S Complexity : O(1)/O(1)

class Solution {
public:
    string intToRoman(int num) {
        string M[] = {"", "M", "MM", "MMM"};
        string C[] = {"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"};
        string X[] = {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"};
        string I[] = {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};
        return M[num / 1000] + C[(num % 1000) / 100] + X[(num % 100) / 10] + I[num % 10];
    }
};