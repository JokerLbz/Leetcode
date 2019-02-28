//Question : 20. Valid Parentheses
//URL : https://leetcode.com/problems/valid-parentheses/
//Approach : Stack (栈求解)
//Runtime : 4 ms (100%)
//Memory Usage : 8.9 MB (70.30%)
//Time complexity : O(n)
//Space complexity : O(n)

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == '(' || s[i] == '[' || s[i] == '{')
                st.push(s[i]);
            else
            {
                if(st.empty())  return false;
                if(s[i] == ']' && st.top() != '[')    return false;
                if(s[i] == ')' && st.top() != '(')    return false;
                if(s[i] == '}' && st.top() != '{')    return false;
                st.pop();
            }
        }
        return st.empty();
    }
};