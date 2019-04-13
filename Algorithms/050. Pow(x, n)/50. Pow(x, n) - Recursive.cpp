//Approach : Recursive
//   √ 304/304 cases passed (4 ms)
//   √ Your runtime beats 100 % of cpp submissions
//   √ Your memory usage beats 100 % of cpp submissions (8.4 MB)
//T/S Complexity : O(log n)/O(log n)

class Solution {
private:
    double Pow(double x, long n)
    {
        if(n == 0)
            return 1;
        double half = Pow(x, n / 2);
        // n % 2 == 0 -> x^n == x^(n/2) * x^(n/2)
        // n % 2 == 1 -> x^n == x * x^(n/2) * x^(n/2)
        return n % 2 == 1 ? x * half * half : half * half;
    }
public:
    double myPow(double x, int n) {
        bool negtive = n < 0;
        long exp = n;
        if(negtive)
            exp = -(long)n;
        return negtive ? 1 / Pow(x, exp) : Pow(x, exp);
    }
};