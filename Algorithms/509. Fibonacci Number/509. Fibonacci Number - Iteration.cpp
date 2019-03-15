//Question : 509. Fibonacci Number
//URL : https://leetcode.com/problems/fibonacci-number/
//Approach : Iteration
//Runtime : 4 ms (100%)
//Memory Usage : 8.3 MB (76.14%)
//Time complexity : O(n)
//Space complexity : O(1)

class Solution {
public:
    int fib(int N) {
        if(N < 2)   return N;
        N -= 1;
        int a = 0, b = 1, c;
        while(N--)
        {
            c = a + b;
            a = b;
            b = c;
        }
        return c;
    }
};