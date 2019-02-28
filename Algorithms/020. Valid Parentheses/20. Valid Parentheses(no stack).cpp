//Question : 20. Valid Parentheses
//URL : https://leetcode.com/problems/valid-parentheses/
//Approach : No Stack (无栈求解)
//Runtime : 4 ms (100%)
//Memory Usage : 8.7 MB (98.25%)
//Time complexity : O(n)
//Space complexity : O(n)
//Reference : https://leetcode.com/problems/valid-parentheses/discuss/9464/C%2B%2B-solution-without-stack

class Solution {
public:
    bool isValid(string s) {
        int top = -1;   //The stack is empty while top == -1
        for(int i = 0; i < s.size(); i++)
        {
            if(top == -1 && (s[i] == ')' || s[i] == ']' || s[i] == '}'))   
               return false;
            switch(s[i]){
                case ')': case ']': case '}':
                    //According to ASCII code, ')' - '(' = 1, ']' - '[' = 2, '}' - '{' = 2
                    //abs function is important to deal with the case like -- ')' - '[' = -50
                    if(abs(s[i] - s[top]) <= 2)  
                        top--;
                    else
                        return false;
                    break;
                default:
                    //top is smaller than i,so we use the front array as stack;
                    s[++top] = s[i];
                    break;
            }
        }
        return top == -1;
    }
};