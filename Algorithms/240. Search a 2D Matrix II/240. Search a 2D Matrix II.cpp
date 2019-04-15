//Approach : Binary Search
//   √ 129/129 cases passed (68 ms)
//   √ Your runtime beats 81.65 % of cpp submissions
//   √ Your memory usage beats 11.32 % of cpp submissions (13 MB)
//T/S Complexity : O(log nm)/O(1)
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(matrix.empty())  return false;
        int row_length = matrix[0].size();
        int row = 0, column = matrix.size() - 1;
        while(row < row_length && column >= 0)
        {
            if(matrix[column][row] == target)
                return true;
            else if(target < matrix[column][row])
                column--;
            else
                row++;
        }
        return false;
    }
};