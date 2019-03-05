//Question : 36. Valid Sudoku
//URL : https://leetcode.com/problems/valid-sudoku/
//Approach : set
//Runtime : 20 ms (98.05%)
//Memory Usage : 13 MB (51.47%)
//Time complexity : O(1)
//Space complexity : O(1)

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<char> s;
        //test row
        for(int i = 0; i < 9; i++)
        {
            s.clear();
            for(int j = 0; j < 9; j++)
            {
                if(board[i][j] != '.')
                {
                    if(s.count(board[i][j]) > 0)
                        return false;
                    else
                        s.insert(board[i][j]);
                }
            }
        }
        //test column
        for(int i = 0; i < 9; i++)
        {
            s.clear();
            for(int j = 0; j < 9; j++)
            {
                if(board[j][i] != '.')
                {
                    if(s.count(board[j][i]) > 0)
                        return false;
                    else
                        s.insert(board[j][i]);
                }
            }
        }
        //test sub-box
        for(int i = 0; i < 3; i++)
        {
            for(int j = 0; j < 3; j++)
                if(!test_sub_box(board, i * 3, j * 3))   return false;
        }
        return true;
    }
    
    bool test_sub_box(vector<vector<char>>& board,int x,int y)
    {
        set<char> s;
        for(int i = x; i < x+3; i++)
        {
            for(int j = y; j < y+3; j++)
            {
                if(board[i][j] != '.')
                {
                    if(s.count(board[i][j]) > 0)
                        return false;
                    else
                        s.insert(board[i][j]);
                }
            }
        }
        return true;
    }
};