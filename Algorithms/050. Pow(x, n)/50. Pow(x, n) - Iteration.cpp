//Approach : Iteration
//   √ 304/304 cases passed (4 ms)
//   √ Your runtime beats 100 % of cpp submissions
//   √ Your memory usage beats 100 % of cpp submissions (8.2 MB)
//T/S Complexity : O(log n)/O(1)

class Solution {
public:
    double myPow(double x, int n) {
        bool negtive = n < 0;
        double res = 1;
        unsigned long exp = n;
        if(negtive)
            exp = -(long)n;
        while(exp)
        {
            if(exp & 1)  res *= x;
            exp >>= 1;
            x *= x;
        }
        return negtive ? 1 / res : res;
    }
};