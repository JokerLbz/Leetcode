//Question : 27. Remove Element
//URL : https://leetcode.com/problems/remove-element/
//Approach : Two Pointer (双指针)
//Runtime : 4 ms (100%)
//Memory Usage : 9.2 MB (72.64%)
//Time complexity : O(n)
//Space complexity : O(1)

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i = 0, len = nums.size();
        for(int j = 0; j < len; j++)
        {
            if(nums[j] != val)
                nums[i++] = nums[j];
        }
        return i;
    }
};