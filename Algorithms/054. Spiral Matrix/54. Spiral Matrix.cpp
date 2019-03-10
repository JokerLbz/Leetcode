//Question : 54. Spiral Matrix
//URL : https://leetcode.com/problems/spiral-matrix/
//Approach : Directions
//Runtime : 4 ms (100%)
//Memory Usage : 8.9 MB (5.26%)
//Time complexity : O(n^2)
//Space complexity : O(1)
//Reference : https://leetcode.com/problems/spiral-matrix/discuss/20573/A-concise-C%2B%2B-implementation-based-on-Directions

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<vector<int>> dir = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
        vector<int> res;

        int column_len = matrix.size(); if(!column_len)  return res;
        int row_len = matrix[0].size(); if(!row_len)   return res;

        vector<int> record = {row_len, column_len - 1};
        int c_step = 0, r_step = -1;  //r_step = -1 for martix[0][0]
        int step = 0;
        while(record[step % 2])
        {
            for(int i = 0; i < record[step % 2]; i++)
            {
                c_step += dir[step % 4][0];
                r_step += dir[step % 4][1];
                res.push_back(matrix[c_step][r_step]);
            }
            record[step % 2]--;
            step = (step + 1) % 4;
        }
        return res;
    }
};