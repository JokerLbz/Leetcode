//Approach : Binary Search
//   √ 17/17 cases passed (12 ms)
//   √ Your runtime beats 29.95 % of cpp submissions
//   √ Your memory usage beats 85.17 % of cpp submissions (9.4 MB)
//T/S Complexity : O(nlog n)/O(1)

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int len = numbers.size();
        for(int i = 0; i < len - 1; i++)
        {
            int left = i + 1, right = len - 1, temp_target = target - numbers[i];
            while(left <= right)
            {
                int mid = left + (right - left) / 2;
                if(numbers[mid] == temp_target)
                    return vector<int>{i + 1, mid + 1};
                else if(numbers[mid] < temp_target)
                    left = mid + 1;
                else
                    right = mid - 1;
            }
        }
        return vector<int>{};
    }
};