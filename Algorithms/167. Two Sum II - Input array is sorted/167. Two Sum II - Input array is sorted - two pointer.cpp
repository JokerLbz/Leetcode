//Approach : Two Pointer
//   √ 17/17 cases passed (8 ms)
//   √ Your runtime beats 99.14 % of cpp submissions
//   √ Your memory usage beats 100 % of cpp submissions (9.3 MB)
//T/S Complexity : O(n)/O(1)

class Solution {
public:
    vector<int> twoSum(vector<int> &numbers, int target) {
        if(numbers.empty()) return {};
        for(int i=0; i<numbers.size()-1; i++) {
            int start=i+1, end=numbers.size()-1, gap=target-numbers[i];
            while(start <= end) {
                int m = start+(end-start)/2;
                if(numbers[m] == gap) return {i+1,m+1};
                else if(numbers[m] > gap) end=m-1;
                else start=m+1;
            }
        }
        return vector<int>{};
    }
};