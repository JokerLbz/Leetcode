//Approach : Intuition
//   √ 478/478 cases passed (52 ms)
//   √ Your runtime beats 98.84 % of cpp submissions
//   √ Your memory usage beats 98.64 % of cpp submissions (15.3 MB)
//T/S Complexity : O(n)/O(1)

class Solution {
public:
    void reverseString(vector<char>& s) {
        int start = 0, end = s.size() - 1;
        while(start < end)
            swap(s[start++], s[end--]);
    }
};