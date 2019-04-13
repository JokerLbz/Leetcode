//Approach : Intuition
//   √ 21/21 cases passed (4 ms)
//   √ Your runtime beats 100 % of cpp submissions
//   √ Your memory usage beats 99.7 % of cpp submissions (9 MB)
//T/S Complexity : O(n^2)/O(n)

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        vector<vector<int>> copy(matrix);
        for(int i = n - 1; i >= 0; i--)
            for(int j = 0; j < n; j++)
                matrix[j][i] = copy[n - 1 - i][j];
        return;
    }
};