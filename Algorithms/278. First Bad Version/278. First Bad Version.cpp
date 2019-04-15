//Approach : Binary Search
//   √ 22/22 cases passed (4 ms)
//   √ Your runtime beats 100 % of cpp submissions
//   √ Your memory usage beats 70.87 % of cpp submissions (8.1 MB)
//T/S Complexity : O(log n)/O(1)

// Forward declaration of isBadVersion API.
bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int left = 0;
        while((n - left) > 1)
        {
            int mid = left + (n - left) / 2;
            isBadVersion(mid) ? n = mid : left = mid;
        }
        return n;
    }
};