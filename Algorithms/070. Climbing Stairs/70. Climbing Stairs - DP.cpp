//Approach : DP
//   √ 45/45 cases passed (4 ms)
//   √ Your runtime beats 100 % of cpp submissions
//   √ Your memory usage beats 70.77 % of cpp submissions (8.4 MB)
// T/S Complexity : O(n)/O(n)

class Solution {
public:
    int climbStairs(int n) {
        if(n <= 2)  return n;
        int step[n + 1];
        step[1] = 1;    step[2] = 2;
        for(int i = 3; i <= n; i++)
            step[i] = step[i - 1] + step[i - 2];
        return step[n];
    }
};