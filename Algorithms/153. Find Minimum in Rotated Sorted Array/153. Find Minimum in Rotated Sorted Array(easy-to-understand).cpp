//Question : 153. Find Minimum in Rotated Sorted Array
//URL : https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/
//Approach : Binary Search (二分查找)
//Runtime : 4 ms (100%)
//Memory Usage : 8.6 MB (95.82%)
//Time complexity : O(log n)
//Space complexity : O(1)

class Solution {
public:
    int findMin(vector<int>& nums) {
        int start = 0, end = nums.size() - 1;
        if(end == 0)    return nums[0];
        if(nums[start] < nums[end]) return nums[start];
        while(start <= end)
        {
            int mid = start + (end - start) / 2;
            if(nums[mid] > nums[mid + 1])
                return nums[mid + 1];
            if(nums[mid] < nums[mid - 1])
                return nums[mid];
            if(nums[mid] > nums[start])
                start = mid + 1;
            else
                end = mid - 1;
        }
        return nums[0];
    }
};