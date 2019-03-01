//Question : 88. Merge Sorted Array
//URL : https://leetcode.com/problems/merge-sorted-array/
//Approach : Fill the longer array from the end (大数组尾部填充)
//Runtime : 8 ms (100%)
//Memory Usage : 9 MB (83.78%)
//Time complexity : O(m+n)
//Space complexity : O(1)
//Reference : https://leetcode.com/problems/merge-sorted-array/discuss/29515/4ms-C%2B%2B-solution-with-single-loop

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m - 1, j = n - 1, index = m + n - 1;
        while(j >= 0)
            nums1[index--] = i >= 0 && nums1[i] > nums2[j] ? nums1[i--] : nums2[j--];
    }
};