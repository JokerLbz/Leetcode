//Approach : Intuition
//   √ 1079/1079 cases passed (8 ms)
//   √ Your runtime beats 100 % of cpp submissions
//   √ Your memory usage beats 100 % of cpp submissions (8.3 MB)
//T/S Complexity : O(n)/O(1)

class Solution {
public:
    int myAtoi(string str) {
        int i = 0, sign = 1, base = 0;
        while(str[i] == ' ')
            i++;
        if(str[i] == '+' || str[i] == '-')
            sign = str[i++] == '-' ? -1 : 1;
        int max_edge = INT_MAX / 10;
        while(isdigit(str[i]))
        {
            if(base > max_edge || base == max_edge && str[i] > '7')
                return sign > 0 ? INT_MAX : INT_MIN;
            base = base * 10 + (str[i] - '0');
            i++;
        }
        return sign * base;
    }
};