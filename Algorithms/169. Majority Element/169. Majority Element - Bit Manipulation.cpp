//Approach : Bit Manipulation
//   √ 44/44 cases passed (28 ms)
//   √ Your runtime beats 42.43 % of cpp submissions
//   √ Your memory usage beats 62.83 % of cpp submissions (11.3 MB)
// T/S complexity : O(n)/O(1)

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int major = 0, n = nums.size();
        for (int i = 0, mask = 1; i < 32; i++, mask <<= 1) {
            int bitCounts = 0;
            for (int j = 0; j < n; j++) {
                if (nums[j] & mask) bitCounts++;
                if (bitCounts > n / 2) {
                    major |= mask;
                    break;
                }
            }
            if(i == 31) break;
        }
        return major;
    } 
};