//Question : 70. Climbing Stairs
//URL : https://leetcode.com/problems/climbing-stairs/
//Approach : Iteration
//Runtime : 4 ms (%)
//Memory Usage : 8.4 MB (81.96%)
//Time complexity : O(n)
//Space complexity : O(1)

class Solution {
public:
    int climbStairs(int n) {
        if(n <= 2)  return n;
        int step1 = 1, step2 = 2;
        n -= 2;
        while(n--)
        {
            int temp = step1 + step2;
            step1 = step2;
            step2 = temp;
        }
        return step2;
    }
};