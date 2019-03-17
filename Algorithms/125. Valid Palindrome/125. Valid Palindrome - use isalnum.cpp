//Aproach : Intuition
//   √ 476/476 cases passed (16 ms)
//   √ Your runtime beats 18.55 % of cpp submissions
//   √ Your memory usage beats 82.51 % of cpp submissions (9.1 MB)
//T/S Complexity : O(n) / O(1)

    bool isPalindrome(string s) {
        if (s.empty())   return true;
        int start = 0, end = s.size() - 1;
        while(start < end)
        {
            while(!isalnum(s[start]) && start < end)
                start++;
            while(!isalnum(s[end]) && start < end)
                end--;
            if(tolower(s[start++]) != tolower(s[end--]))
                return false;
            // if(tolower(s[start]) == tolower(s[end]))
            // {
            //     start++;
            //     end--;
            // }
            // else
            //     return false;
        }
        return true;
    }