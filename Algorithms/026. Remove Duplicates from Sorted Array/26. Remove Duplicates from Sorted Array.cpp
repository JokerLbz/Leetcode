//Question : 26. Remove Duplicates from Sorted Array
//URL : https://leetcode.com/problems/remove-duplicates-from-sorted-array/
//Approach : Two Pointer (双指针)
//Runtime : 24 ms (100%)
//Memory Usage : 11 MB (6.20%)
//Time complexity : O(n)
//Space complexity : O(1)

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int len = nums.size();
        if(len < 2) return len;
        int i = 0;
        for(int j = 1; j < len; j++)
        {
            if(nums[i] != nums[j])
                nums[++i] = nums[j];
        }
        return i + 1;
    }
};