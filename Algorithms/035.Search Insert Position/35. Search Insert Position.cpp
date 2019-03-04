//Question : 35. Search Insert Position
//URL : https://leetcode.com/problems/search-insert-position/
//Approach : Binary Search(二分查找)
//Runtime : 8 ms (99.32%)
//Memory Usage : 9.3 MB (24.04%)
//Time complexity : O(log(n))
//Space complexity : O(1)

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int start = 0, end = nums.size() - 1;
        int res = 0;
        while(start < end)
        {
            int mid = (start + end) / 2;
            if(nums[mid] < target)
                start = mid + 1;
            else if(nums[mid] == target)
                return mid;
            else
                end = mid - 1;
        }
        return nums[start] >= target ? start : start + 1;
    }
};