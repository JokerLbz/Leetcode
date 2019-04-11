//Approach : Binary Search
//   √ 196/196 cases passed (4 ms)
//   √ Your runtime beats 100 % of cpp submissions
//   √ Your memory usage beats 99.82 % of cpp submissions (8.7 MB)
//T/S Complexity : O(log n)/O(1)
class Solution {
public:
    int search(vector<int>& nums, int target) {
        if(nums.empty())    return -1;
        int start = 0, end = nums.size() - 1;
        while(start < end)
        {
            int mid = start + (end - start) / 2;
            if(nums[mid] > nums[end])
                start = mid + 1;
            else
                end = mid;
        }
        if(target <= nums.back())
            end = nums.size() - 1;
        else
        {
            start = 0;
            end--;
        }
        while(start <= end)
        {
            int mid = start + (end - start) / 2;
            if(nums[mid] > target)
                end = mid - 1;
            else if(nums[mid] < target)
                start = mid + 1;
            else
                return mid;
        }
        return -1;
    }
};