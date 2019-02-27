//Question : 1.Two Sum
//URL : https://leetcode.com/problems/two-sum/
//Approach : Two Pointer (双指针)
//Runtime : 8 ms (100%)
//Memory Usage : 9.6 MB (63.58%)
//Time complexity : O(n)
//Space complexity : O(n)

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res;
        vector<int> bac_nums = nums;
        sort(nums.begin(), nums.end());
        int begin = 0, end = nums.size() - 1, temp;
        while(begin < end)
        {
            temp = target - nums[begin];
            if(temp > nums[end])
                begin++;
            else if(temp < nums[end])
                end--;
            else
                break;
        }
        int i = 0;
        for(;i < bac_nums.size(); i++)
        {
            if(bac_nums[i] == nums[begin] || bac_nums[i] == nums[end])
                res.push_back(i);
        }
        return res;
    }
};