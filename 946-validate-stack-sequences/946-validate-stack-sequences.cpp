class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        int n = pushed.size();
        stack<int> st;
        int i=0,j=0;
        while(i<n && j<n)
        {
            if(!st.empty() && st.top()==popped[j]){
            while(j<n && !st.empty() && st.top()==popped[j])
            {
                st.pop();
                j++;
            }
                st.push(pushed[i]);
                i++;
            }
            else{
                st.push(pushed[i]);
                i++;
            }
        }
        while(j<n && !st.empty() && st.top()==popped[j])
            {
                st.pop();
                j++;
            }
        return st.empty();
    }
};