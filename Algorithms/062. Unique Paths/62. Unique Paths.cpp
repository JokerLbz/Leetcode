//Approach : DP
//   √ 62/62 cases passed (4 ms)
//   √ Your runtime beats 100 % of cpp submissions
//   √ Your memory usage beats 36.13 % of cpp submissions (8.6 MB)
//T/S Complexity : O(m * n)/O(m * n)

class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<vector<int> > dp(m, vector<int>(n, 1));
        for(int i = 1; i < m; i++)
            for(int j = 1; j < n; j++)
                dp[i][j] = dp[i][j - 1] + dp[i - 1][j];
        return dp[m - 1][n - 1];
    }
};