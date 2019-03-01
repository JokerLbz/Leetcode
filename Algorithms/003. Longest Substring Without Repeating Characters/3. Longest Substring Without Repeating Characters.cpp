//Question : 3. Longest Substring Without Repeating Characters
//URL : https://leetcode.com/problems/longest-substring-without-repeating-characters/
//Approach : Sliding Window (滑动窗口)
//Runtime : 20 ms (98.96%)
//Memory Usage : 14.8 MB (76.16%)
//Time complexity : O(n)
//Space complexity : O(n)

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int res = 0, left = -1;
        int last_index[256];    //record the last index
        for(int i = 0; i < 256; i++)
            last_index[i] = -1;
        for(int i = 0, len = s.size(); i < len; i++)
        {
            if(last_index[s[i]] != -1)
                left = max(last_index[s[i]], left);     //use max to avoid left reduction
            last_index[s[i]] = i;   //update last index
            res = max(res, i - left);
        }
        return res;
    }
    
};