//Approach : Stack
//T/S Complexity : O(n)/O(n)

class Solution {
public:
    string removeOuterParentheses(string S) {
        stack<int> s;
        for(int i = 0; i < S.size(); i++)
        {
            if(S[i] == '(')
                s.push(i);
            else
            {
                if(s.size() == 1)
                {
                    S.erase(i, 1);
                    S.erase(s.top(), 1);
                    i -= 2;
                    s.pop();
                }
                else
                    s.pop();
            }
        }
        return S;
    }
};