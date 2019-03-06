//Question : 11. Container With Most Water
//URL : https://leetcode.com/problems/container-with-most-water/
//Approach : Two Pointer (双指针)
//Runtime : 20 ms (98.78%)
//Memory Usage : 10.1 MB (25.59%)
//Time complexity : O(n)
//Space complexity : O(1)

class Solution {
public:
    int maxArea(vector<int>& height) {
        int res = 0, start = 0, end = height.size() - 1;
        while(start < end)
        {
            res = max(res, (end - start) * (height[start] <= height[end] ? height[start++] : height[end--]));
        }
        return res;
    }
};