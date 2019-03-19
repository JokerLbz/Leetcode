//Approach : Bit Manipulation
//   √ 16/16 cases passed (16 ms)
//   √ Your runtime beats 97.32 % of cpp submissions
//   √ Your memory usage beats 94.3 % of cpp submissions (9.6 MB)
// T/S Complexity : O(n)/O(1)

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int res = 0;
        for(int num : nums)
            res ^= num;
        return res;
    }
};