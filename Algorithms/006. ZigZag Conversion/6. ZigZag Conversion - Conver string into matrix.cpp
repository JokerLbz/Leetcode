//Approach : Covert string into matrix
//   √ 1158/1158 cases passed (68 ms)
//   √ Your runtime beats 13.9 % of cpp submissions
//   √ Your memory usage beats 10.5 % of cpp submissions (28.1 MB)
// T/S Complexity : O(n^2)/O(n^2)

class Solution {
public:
    string convert(string s, int numRows) {
        if(s.empty() || numRows == 1)   return s;
        /*
           *P      I    N
           *A   *L S  I G
           *Y *A   H R
           *P      I
        */
        //num means V's number in s(V just like the pattern above(with * on alphabet's left ))
        int divisor = numRows + numRows - 2;
        int num = s.size() / divisor;
        int residue = s.size() % divisor;
        residue = residue <= numRows ? (residue + numRows - 1) / numRows : 1 + residue % numRows;
        int row_len = (numRows - 1) * num + residue;
        vector<vector<char> > matrix(numRows, vector<char>(row_len, 0));

        int row = 0, column = 0;
        bool up_to_down = true;
        //convert input string into the matrix
        for(int i = 0; i < s.size(); i++)
        {
            if(up_to_down)
            {
                matrix[column++][row] = s[i];
                if(column == numRows - 1)
                    up_to_down = !up_to_down;
            }
            else
            {
                matrix[column--][row++] = s[i];
                if(column == 0)
                    up_to_down = !up_to_down;
            }
        }
        //get result by foreach the matrix
        int index = 0;
        for(int i = 0; i < matrix.size(); i++)
        {
            for(int j = 0; j < matrix[i].size(); j++)
            {
                if(matrix[i][j] != 0)
                    s[index++] = matrix[i][j];
            }
        }
        return s;
    }
};