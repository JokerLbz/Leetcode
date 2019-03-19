//Approach : Math
//   √ 16/16 cases passed (24 ms)
//   √ Your runtime beats 35.77 % of cpp submissions
//   √ Your memory usage beats 12.42 % of cpp submissions (11.5 MB)
// T/S Complexity : O(n)/O(n)

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_set<int> s;
        int sum = 0;
        for(int num : nums)
        {
            sum += num;
            if(!s.count(num))
                s.insert(num);
        }

        return 2 * accumulate(s.begin(), s.end(), 0) - sum;
    }
};