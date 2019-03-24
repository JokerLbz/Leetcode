//Approach : hash table
//   √ 17/17 cases passed (16 ms)
//   √ Your runtime beats 17.43 % of cpp submissions
//   √ Your memory usage beats 11.48 % of cpp submissions (9.7 MB)
//T/S Complexity : O(nlog n)/O(n)

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        map<int, int> m;
        for(int i = 0; i < numbers.size(); i++)
        {
            int temp = target - numbers[i];
            if(m.find(temp) != m.end())
                return vector<int>{m.find(temp)->second + 1, i + 1};
            else if(m.find(numbers[i]) == m.end())
                m[numbers[i]] = i;
        }
        return vector<int>{};
    }
};