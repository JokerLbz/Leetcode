//Question : 28. Implement strStr()
//URL : https://leetcode.com/problems/implement-strstr/
//Approach : Brute-force (暴力求解)
//Runtime : 8 ms (99.35%)
//Memory Usage : 9.3 MB (94.35%)
//Time complexity : O(n)
//Space complexity : O(1)

class Solution {
public:
    int strStr(string haystack, string needle) {
        int len1 = haystack.size(), len2 = needle.size();
        if(len2 == 0)   return 0;
        for(int i = 0 ; i < len1; i++)
        {
            if(haystack[i] == needle[0] && len1 - i >= len2)
            {
                int j, k;
                for(j = i, k = 0; k < len2; j++, k++)
                {
                    if(haystack[j] != needle[k])
                        break;
                }
                if(k == len2)   return i;
            }
        }
        return -1;
    }
};