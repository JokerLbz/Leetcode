//Approach : Binary Search
//   √ 136/136 cases passed (12 ms)
//   √ Your runtime beats 98.56 % of cpp submissions
//   √ Your memory usage beats 100 % of cpp submissions (9.7 MB)
//T/S Complexity : O(log (m+n))/O(1)

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(matrix.empty())  return false;
        if(matrix[0].empty())   return false;
        int column = 0, row = matrix[0].size() - 1;
        while(column < matrix.size() && row >= 0)
        {
            if(matrix[column][row] == target)
                return true;
            else if(matrix[column][row] > target)
                row--;
            else
                column++;
        }
        return false;
    }
};