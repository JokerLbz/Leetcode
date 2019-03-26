//Approach : One Stack

//Time Complexity : O(1) for any function
//Space Complexity : O(n) for stack
//Reference : https://leetcode.com/problems/min-stack/discuss/49031/Share-my-Java-solution-with-ONLY-ONE-stack
//Wrong Answer!

class MinStack {
private:
    stack<int> s;
    long min;
public:
    /** initialize your data structure here. */
    MinStack() {
        
    }
    
    void push(int x) {
        if(s.empty())
        {
            s.push(0);
            min = x;
        }
        else
        {
            s.push(x - min);
            if(s.top() < 0)
                min = x;
        }
    }
    
    void pop() {
        if(s.empty())   return;
        if(s.top() < 0)
            min -= s.top();
        s.pop();
    }
    
    int top() {
        if(s.empty())   return 0;
        int top = s.top();
        if(top < 0)
            return (int)min;
        else
            return (int)(min + top);
    }
    
    int getMin() {
        return (int)min;
    }
};