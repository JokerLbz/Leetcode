//Question : 88. Merge Sorted Array
//URL : https://leetcode.com/problems/merge-sorted-array/
//Approach : Fill the longer array from the end (大数组尾部填充)
//Runtime : 8 ms (100%)
//Memory Usage : 9.1 MB (31.78%)
//Time complexity : O(m+n)
//Space complexity : O(m+n)

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> res(m+n);
        int index=0,i=0,j=0;
        while(i<m&&j<n)
            res[index++] = nums1[i]<nums2[j]?nums1[i++]:nums2[j++];
        while(i<m)
            res[index++] = nums1[i++];
        while(j<n)
            res[index++] = nums2[j++];
        nums1 = res;
    }
};