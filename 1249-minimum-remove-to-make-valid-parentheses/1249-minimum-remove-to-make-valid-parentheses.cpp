class Solution {
public:
    string minRemoveToMakeValid(string s) {
       int n = s.length();
        stack<int> st;
    
        int i=0;
        while(i<n)
        {
            if(st.empty() && s[i]=='(')st.push(i),i++;
          else if(s[i]=='(')st.push(i),i++;
            else if(st.empty() && s[i]==')'){
                
                s.erase(i,1);
            }
              else if(s[i]==')' && s[st.top()]=='(')st.pop(),i++;
            else{i++;}
        }
        
        
        if(!st.empty())
        {
            while(!st.empty())
            {
                //cout<<s[st.top()]<<endl;
                s.erase(st.top(),1);
                st.pop();
            }
        }
        return s;
    }
};