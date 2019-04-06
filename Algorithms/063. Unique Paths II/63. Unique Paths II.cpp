//Approach : DP
//   √ 43/43 cases passed (4 ms)
//   √ Your runtime beats 100 % of cpp submissions
//   √ Your memory usage beats 30.67 % of cpp submissions (9.3 MB)
//T/S Complexity : O()/O()

class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {

        //Use long int to avoid overflow
        vector<vector<long>> dp(obstacleGrid.size(), vector<long>(obstacleGrid[0].size()));
        for(int i = 0; i < dp.size(); i++)
            for(int j = 0; j < dp[0].size(); j++)
                dp[i][j] = obstacleGrid[i][j];

        
        int row = dp.size();
        int col = dp[0].size();
        
        if(dp[0][0] == 1)
            return 0;
        dp[0][0] = 1;
        for(int i = 1; i < row; i++)
        {
            if(dp[i][0] == 0)
                dp[i][0] = 1;
            else
            {
                for(int j = i; j < row; j++)
                    dp[j][0] = 0;
                break;
            }
        }
        for(int i = 1; i < col; i++)
        {
            if(dp[0][i] == 0)
                dp[0][i] = 1;
            else
            {
                for(int j = i; j < col; j++)
                    dp[0][j] = 0;
                break;
            }
        }
        for(int i = 1; i < row; i++)
            for(int j = 1; j < col; j++)
            {

                if(dp[i][j] == 1)
                    dp[i][j] = 0;
                else
                    dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
            }
        return dp[row - 1][col - 1];
    }
};