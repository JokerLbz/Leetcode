//Approach : hash table
//   √ 44/44 cases passed (24 ms)
//   √ Your runtime beats 60.49 % of cpp submissions
//   √ Your memory usage beats 25 % of cpp submissions (11.4 MB)
//T/S Complexity : O(n) / O(n)

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> m;
        int len = nums.size();
        for(int i = 0; i < len; i++)
            if(++m[nums[i]] > len / 2)
                return nums[i];
        return 0;
    }
};