class MinStack {
public:
    stack<long long>s;
    long long m;
    MinStack() {
        m=0;
    }
    
    void push(int val) {
        if(s.empty()){
            s.push(0);
            m=val;
        }
        else{
            if(val<m){
                s.push(val-m);
                m=val;
            }
            else{
                s.push(val-m);
            }
        }
    }
    
    void pop() {
        if(s.empty())return;
        if(s.top()<0){
            m=m-s.top();
        }
        s.pop();
        
    }
     
    int top() {
        if(s.empty())return -1;
        return (s.top()<0)?m:s.top()+m;
    }
    
    int getMin() {
        return m;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */