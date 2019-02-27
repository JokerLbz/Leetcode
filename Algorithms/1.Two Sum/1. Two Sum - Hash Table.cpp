//Question : 1.Two Sum
//URL : https://leetcode.com/problems/two-sum/
//Approach : One-pass Hash Table (单次遍历哈希数表)
//Runtime : 12 ms (97.81%)
//Memory Usage : 10.4 MB (27.71%)
//Time complexity : O(n)
//Space complexity : O(n)

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> hash;    //key -> value,i -> index
        for(int i = 0; i < nums.size(); i++)
        {
            int temp = target - nums[i];
            if(hash.count(temp))
                return vector{hash.find(temp)->second,i};
            else
                hash[nums[i]] = i;
        }
        return std::vector<int>();
    }
};