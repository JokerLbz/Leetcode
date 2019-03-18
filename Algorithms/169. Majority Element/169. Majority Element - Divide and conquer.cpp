//Approach : Divide and conquer
//   √ 44/44 cases passed (32 ms)
//   √ Your runtime beats 24.77 % of cpp submissions
//   √ Your memory usage beats 32.3 % of cpp submissions (11.4 MB)
// T/S Complexity : O(nlog n)/O(nlog n)
//Reference : Solution

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        return support(nums, 0, nums.size() - 1);
    }

    int support(vector<int>& nums, int start, int end)
    {
        if(start == end)    return nums[start];

        int mid = start + (end - start) / 2;
        int left = support(nums, start, mid);
        int right = support(nums, mid + 1, end);

        if(left == right)   return left;

        int left_count = count(nums.begin() + start, nums.begin() + end + 1, left);
        int right_count = count(nums.begin() + start, nums.begin() + end + 1, right);

        return left_count > right_count ? left : right;
    }
};