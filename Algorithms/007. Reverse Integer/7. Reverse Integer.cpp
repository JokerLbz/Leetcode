//Approach : Intuition
//   √ 1032/1032 cases passed (12 ms)
//   √ Your runtime beats 98.49 % of cpp submissions
//   √ Your memory usage beats 55.57 % of cpp submissions (14 MB)
//T/S Complexity : O(n)/O()

class Solution {
public:
    int reverse(int x) {
        if(x == INT_MIN)    return 0;
        int res = 0;
        bool positive = x > 0;
        x = abs(x);
        int max = INT_MAX / 10;
        while(x)
        {
            int remainder = x % 10;
            x /= 10;
            if(res > max)  
                return 0;
            else if(res == max && remainder > 7)   
                return 0;
            else
            {
                res *= 10;
                res += remainder;
            }
        }
        return positive ? res : -res;
    }
};