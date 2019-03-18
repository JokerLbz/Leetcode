//Approach : Moore Voting Algorithm
//   √ 44/44 cases passed (20 ms)
//   √ Your runtime beats 99.03 % of cpp submissions
//   √ Your memory usage beats 99.34 % of cpp submissions (11 MB)
// T/S Complexity : O(n)/O(1)
//Reference : Solution

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int major, count = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            if(!count)
            {
                major = nums[i];
                count = 1;
            }
            else
                count += nums[i] == major ? 1 : -1;
        }
        return major;
    }
};