//Question : 66. Plus One
//URL : https://leetcode.com/problems/plus-one/
//Approach : Intuition (直接求解)
//Runtime : 4 ms (100%)
//Memory Usage : 8.7 MB (5.11%)
//Time complexity : O(n)
//Space complexity : O(1)

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry = 1;
        for(int i = digits.size() - 1; i >= 0; i--)
        {
            digits[i] += carry;
            carry = digits[i] / 10;
            digits[i] %= 10;
        }
        if(carry > 0)
            digits.insert(digits.begin(),carry);
        return digits;
    }
};