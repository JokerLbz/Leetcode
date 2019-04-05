//Approach : DP
//   √ 61/61 cases passed (12 ms)
//   √ Your runtime beats 98.31 % of cpp submissions
//   √ Your memory usage beats 77.99 % of cpp submissions (10.9 MB)
//T/S Complexity : O(n)/O(n)

class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int row = grid.size();
        int col = grid[0].size();
        vector<vector<int> > dp(row, vector<int>(col, INT_MAX));
        dp[0][0] = grid[0][0];
        for(int i = 0; i < row; i++)
        {
            for(int j = 0; j < col; j++)
            {
                if(i == 0)
                {
                    if(j == 0)  continue;
                    dp[i][j] = min(dp[i][j], dp[i][j - 1] + grid[i][j]);
                }
                else if(j == 0)
                {
                    dp[i][j] = min(dp[i][j], dp[i - 1][j] + grid[i][j]);
                }
                else
                    dp[i][j] = min(dp[i][j], min(dp[i - 1][j], dp[i][j - 1]) + grid[i][j]);
            }
        }
        return dp[row - 1][col - 1];
    }
};