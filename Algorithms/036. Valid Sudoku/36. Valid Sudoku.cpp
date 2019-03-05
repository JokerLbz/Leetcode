//Question : 36. Valid Sudoku
//URL : https://leetcode.com/problems/valid-sudoku/
//Approach : set (数组代替set)
//Runtime : 20 ms (98.05%)
//Memory Usage : 12.1 MB (96.18%)
//Time complexity : O(1)
//Space complexity : O(1)
//Reference:https://leetcode.com/problems/valid-sudoku/discuss/15464/My-short-solution-by-C%2B%2B.-O(n2)

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int tab_row[9][9] = {0}, tab_column[9][9] = {0}, tab_sub[9][9] = {0};
        for(int i = 0; i < board.size(); i++)
            for(int j = 0 ; j < board[i].size(); j++)
            {
                if(board[i][j] != '.')
                {
                    int num = board[i][j] - '0' - 1;
                    int k = i / 3 * 3 + j / 3;
                    if(tab_row[i][num] || tab_column[j][num] || tab_sub[k][num])
                        return false;
                    tab_row[i][num] = tab_column[j][num] = tab_sub[k][num] = 1;
                }
            }
        return true;
    }
};
