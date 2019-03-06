//Question : 4. Median of Two Sorted Arrays
//URL : https://leetcode.com/problems/median-of-two-sorted-arrays/
//Approach : Binary-search (二分查找)
//Runtime : 40ms (97.22%)
//Memory Usage : 21.4 MB (70.59%)
//Time complexity : O(log min(m+n))
//Space complexity : O(1)
//Reference : https://www.youtube.com/watch?v=LPFhl65R7ww

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        //ensure nums1.size() < nums2.size()
        if(nums1.size() > nums2.size())
            return findMedianSortedArrays(nums2, nums1);
        
        int x = nums1.size();
        int y = nums2.size();
        
        int start = 0, end = x;
        while(start <= end)
        {
            //partitionX+partitionY = x-partitionX+y-partitionY
            int partitionX = (start + end) / 2;
            int partitionY = (x + y + 1) / 2 - partitionX;
            
            int maxLeftX = partitionX ? nums1[partitionX - 1] : INT_MIN;
            int minRightX = partitionX == x ? INT_MAX : nums1[partitionX];
            int maxLeftY = partitionY ? nums2[partitionY - 1] : INT_MIN;
            int minRightY = partitionY == y ? INT_MAX : nums2[partitionY];
            
            if(maxLeftX <= minRightY && maxLeftY <= minRightX)    //find the partition!
            {
                if((x + y) % 2 == 0)
                    return (max(maxLeftX, maxLeftY) + min(minRightX, minRightY)) / 2.0;
                else
                    return max(maxLeftX, maxLeftY);
            }
            else if(maxLeftX > minRightY)
                end = partitionX - 1;
            else
                start = partitionX + 1;
        }
        return -1;
    }
};