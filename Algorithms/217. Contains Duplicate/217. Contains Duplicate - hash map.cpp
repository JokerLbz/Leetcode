// Approach : hash map
//   √ 18/18 cases passed (52 ms)
//   √ Your runtime beats 38.01 % of cpp submissions
//   √ Your memory usage beats 5.12 % of cpp submissions (18 MB)
// T/S Complexity : O(n)/O(n)
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> s(nums.begin(), nums.end());
        return nums.size() != s.size();
    }
};