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