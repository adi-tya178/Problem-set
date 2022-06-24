class MyQueue {
public:
    stack<int> st;
    MyQueue() {
        
    }
    
    void push(int x) {
        pushHelper(x);
       
    }
     void pushHelper(int x){
        if(st.size()==0){
            st.push(x);
            return;
        }
        int data;
        data = st.top();
        st.pop();
        pushHelper(x);
        st.push(data);
        return;
        
    }
    
    int pop() {
        int temp = st.top();
        st.pop();
        return temp;
    }
    
    int peek() {
        
        int top = st.top();
        return top;
        
    }
    
    bool empty() {
        
        return (st.size()==0);
        
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */