//Approach : Randomization
//   √ 44/44 cases passed (20 ms)
//   √ Your runtime beats 99.03 % of cpp submissions
//   √ Your memory usage beats 92.92 % of cpp submissions (11.1 MB)
// T/S Complexity : O(∞)/O(1)
//Reference : Solution

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int len = nums.size();
        int limit = len / 2;
        srand(unsigned(time(NULL)));
        while(true)
        {
            int candidate = nums[rand() % len];
            int num = 0;
            for(int i = 0; i < len; i++)
            {
                if(nums[i] == candidate)
                    num++;
                if(num > limit)
                    return candidate;
            }
        }
    }
};