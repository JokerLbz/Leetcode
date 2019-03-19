//Approach : Hash Table
//   √ 16/16 cases passed (24 ms)
//   √ Your runtime beats 35.77 % of cpp submissions
//   √ Your memory usage beats 21.18 % of cpp submissions (11.1 MB)
// T/S Complexity : O(n)/O(n)

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_set<int> s;
        for(int num : nums)
        {
            if(s.count(num))
                s.erase(num);
            else
                s.insert(num);
        }
        return *s.begin();
    }
};