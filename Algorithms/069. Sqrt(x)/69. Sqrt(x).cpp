//Approach : Binary Search
//   √ 1017/1017 cases passed (12 ms)
//   √ Your runtime beats 76.68 % of cpp submissions
//   √ Your memory usage beats 99.83 % of cpp submissions (8.1 MB)
//T/S Complexity : O(log n)/O(1)

class Solution {
public:
    int mySqrt(int x) {
        if(!x)  return x;
        int start = 1, end = x;
        while(true)
        {
            int mid = start + (end - start) / 2;
            if(mid > x / mid)
                end = mid - 1;
            else
            {
                if(mid + 1 > x / (mid + 1))
                    return mid;
                else
                    start = mid + 1;
            }
        }
        return start;
    }
};