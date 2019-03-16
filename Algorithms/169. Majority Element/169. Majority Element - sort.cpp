//Aproach : 
//   √ 44/44 cases passed (28 ms)
//   √ Your runtime beats 41.92 % of cpp submissions
//   √ Your memory usage beats 55.97 % of cpp submissions (11.3 MB)
////T/S Complexity : O(1) / O(1)

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        return nums[nums.size() / 2];
    }
};