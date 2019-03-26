//Approach : Two Stack
//   √ 18/18 cases passed (48 ms)
//   √ Your runtime beats 18.69 % of cpp submissions
//   √ Your memory usage beats 97.85 % of cpp submissions (16.8 MB)
//Time Complexity : O(1) for any function
//Space Complexity : O(n) for two stack

class MinStack {
private:
    stack<int> s;
    stack<int> min;
public:
    /** initialize your data structure here. */
    MinStack() {
        min.push(0);
    }
    
    void push(int x) {
        s.push(x);
        if(min.size() > 1 && x <= min.top())
            min.push(x);
        else if(min.size() == 1)
            min.push(x);
    }
    
    void pop() {
        if(s.top() == min.top())
            min.pop();
        s.pop();
        
    }
    
    int top() {
        return s.top();
    }
    
    int getMin() {
        return min.top();
    }
};