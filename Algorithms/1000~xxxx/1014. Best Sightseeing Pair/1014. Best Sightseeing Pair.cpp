//Approach : Record max A[i] + i - j
//   √ 52/52 cases passed (68 ms)
//   √ Your runtime beats 90.82 % of cpp submissions
//   √ Your memory usage beats 100 % of cpp submissions (13.2 MB)
//T/S Complexity : O(n)/O(1)

class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& A) {
        int cur = 0, res = 0;
        for(int num : A)
        {
            res = max(res, cur + num);
            cur = max(cur, num) - 1;    //record A[i] + i - j while A[i] + i is max.
        }
        return res;
    }
};