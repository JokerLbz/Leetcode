//Approach : Count
//   √ 53/53 cases passed (80 ms)
//   √ Your runtime beats 22.24 % of cpp submissions
//   √ Your memory usage beats 100 % of cpp submissions (12.6 MB)
// T/S Complexity : O(n)/O(1)

class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& A) {
        int total = accumulate(A.begin(), A.end(), 0);
        if(total % 3 != 0)  return false;
        total /= 3;
        int sum = 0, count = 0;
        for(int num : A)
        {
            sum += num;
            if(sum == total)
            {
                count++;
                sum = 0;
            }
        }
        return count == 3;
    }
};