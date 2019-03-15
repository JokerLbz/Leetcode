//Question : 509. Fibonacci Number
//URL : https://leetcode.com/problems/fibonacci-number/
//Approach : Dynamic Programming
//Runtime : 4 ms (100%)
//Memory Usage : 8.3 MB (80.24%)
//Time complexity : O(n)
//Space complexity : O(n)

class Solution {
public:
    int fib(int N) {
        if(N == 0)  return N;
        int nums[N + 1];
        nums[0] = 0; nums[1] = 1;
        for(int i = 2; i < N + 1; i++)
            nums[i] = nums[i - 1] + nums[i - 2];
        return nums[N];
    }
};