//Approach : Two Pointer
//T/S Complexity : O(n)/O(1)

class Solution {
public:
    bool match(string s, string pattern)
    {
        int i = 0, j = 0;
        while(i < s.size())
        {
            if(s[i] == pattern[j])
            {
                i++;
                j++;
            }
            else if(islower(s[i]))
                i++;
            else
                return false;
        }
        return j == pattern.size();
    }
    vector<bool> camelMatch(vector<string>& queries, string pattern) {
        vector<bool> res;
        for(string s : queries)
            res.push_back(match(s, pattern));
        return res;
    }
};