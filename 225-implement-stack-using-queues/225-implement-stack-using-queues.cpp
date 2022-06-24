class MyStack {
public:
    queue<int> q2;

    MyStack() {
        
    }
    
    void push(int x) {
      q2.push(x);
        for(int i=1;i<q2.size();i++)
        {
            q2.push(q2.front());
            q2.pop();
        }
    }
    
    int pop() {
        
        int temp = q2.front();
        q2.pop();
        return temp;
    }
    
    int top() {
        return q2.front();
        
    }
    
    bool empty() {
        return q2.empty();
        
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */