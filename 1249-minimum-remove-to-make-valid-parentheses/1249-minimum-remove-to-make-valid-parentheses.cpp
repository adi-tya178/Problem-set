class Solution {
public:
    string minRemoveToMakeValid(string s) {
        long long int n = s.length();
        stack<int> st;
       
      for(int i=0;i<n;i++)
      {
          if(s[i]=='(')st.push(i);
          else if(s[i]==')')
          {
              if(!st.empty())st.pop();
              else
              {
                  s[i]='*';
              }
          }
      }
        
      
            while(!st.empty())
            {
                //cout<<s[st.top()]<<endl;
               s[st.top()]='*';
                st.pop();
            }
        
        s.erase(remove(s.begin(),s.end(),'*'),s.end());
        return s;
    }
};