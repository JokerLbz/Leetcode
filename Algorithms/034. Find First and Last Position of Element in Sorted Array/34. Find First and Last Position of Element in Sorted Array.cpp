//Approach : Binary Search
//   √ 88/88 cases passed (12 ms)
//   √ Your runtime beats 85.5 % of cpp submissions
//   √ Your memory usage beats 100 % of cpp submissions (10.3 MB)
//T/S Complexity : O(log n)/O(1)

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> res(2, -1);
        if(nums.empty())
            return res;
        //find first
        int start = 0, end = nums.size() - 1;
        while(start < end)
        {
            int mid = start + (end - start) / 2;
            if(target <= nums[mid])
                end = mid;
            else
                start = mid + 1;
        }
        if(nums[start] != target)
            return res;
        else res[0] = start;
        //don't have to set start to 0;
        end = nums.size() - 1;
        while(start < end)
        {
            int mid = start + (end - start + 1) / 2;
            if(target >= nums[mid])
                start = mid;
            else
                end = mid - 1;
        }
        res[1] = start;
        return res;
    }
};