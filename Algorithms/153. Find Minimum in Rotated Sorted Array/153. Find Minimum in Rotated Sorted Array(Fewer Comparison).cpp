//Question : 153. Find Minimum in Rotated Sorted Array
//URL : https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/
//Approach : Binary Search (二分查找)
//Runtime : 4 ms (100%)
//Memory Usage : 8.6 MB (95.82%)
//Time complexity : O(log n)
//Space complexity : O(1)
//Reference : https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/solution/

class Solution {
public:
    int findMin(vector<int>& nums) {
        int start = 0, end = nums.size() - 1;
        if(end == 0)    return nums[0];
        if(nums[start] < nums[end]) return nums[start];
        while(end - start > 1)
        {
            int mid = start + (end - start) / 2;
            if(nums[mid] > nums[start])
                start = mid;
            else
                end = mid;
        }
        return nums[end];
    }
};