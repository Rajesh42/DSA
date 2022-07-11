class MinStack {
public:
    stack<int>a,b;
    MinStack() {
    }
    
    void push(int val) {
        a.push(val);
        if(!b.size()||val<=b.top()){
            b.push(val);
        }
    }
    
    void pop() {
        if(a.top() == b.top()){
            b.pop();
        }
        a.pop();
    }
    
    int top() {
        return a.top();
    }
    
    int getMin() {
        return b.top();
    }
};
