// Approach : hash map
//   √ 18/18 cases passed (32 ms)
//   √ Your runtime beats 92.83 % of cpp submissions
//   √ Your memory usage beats 93.53 % of cpp submissions (11.2 MB)
// T/S Complexity : O(nlog n)/O(1)

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        if(nums.empty())    return false;
        sort(nums.begin(), nums.end());
        for(int i = 0; i < nums.size() - 1; i++)
        {
            if(nums[i] == nums[i + 1])
                return true;
        }
        return false;
    }
};