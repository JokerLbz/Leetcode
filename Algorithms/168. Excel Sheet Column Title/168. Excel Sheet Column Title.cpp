//Question : 168. Excel Sheet Column Title
//URL : https://leetcode.com/problems/excel-sheet-column-title/
//Approach : Intuition
//Runtime : 4 ms (100%)
//Memory Usage : 8 MB (73.83%)
//Time complexity : O(log(26) n)
//Space complexity : O(1)
//P.S. : There is a one line solution on https://leetcode.com/problems/excel-sheet-column-title/discuss/51398/My-1-lines-code-in-Java-C%2B%2B-and-Python

class Solution {
public:
    string convertToTitle(int n) {
        string res = "";
        while(n)
        {
            res.insert(res.begin(), 1, (char)((n - 1) % 26 + 'A'));
            --n /= 26;
        }
        return res;
    }
};