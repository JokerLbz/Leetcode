//Question : 509. Fibonacci Number
//URL : https://leetcode.com/problems/fibonacci-number/
//Approach : Recursive
//Runtime : 12 ms (33.93%)
//Memory Usage : 8.4 MB (45.78%)
//Time complexity : O(?)
//Space complexity : O(n)

class Solution {
public:
    int fib(int N) {
        if(N <= 1)  return N;
        else
            return fib(N - 1) + fib(N - 2);
    }
};