// { Driver Code Starts
#include <iostream>
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    string Reduced_String(int k,string s){
        // Your code goes here
        stack<pair<char,int>> st;
        int n = s.length();
            if(k == 1 || k == 0 || n == 0) return "";
        for(int i=0;i<n;i++)
        {
            if(!st.empty() && st.top().first==s[i])
            {
                st.top().second++;
                if(st.top().second==k)
                {
                    st.pop();
                }
            }
            else
            {
                st.push({s[i],1});
            }
        }
        string res;
        while(!st.empty())
        {
            int t = st.top().second;
            char ch = st.top().first;
             st.pop();
            while(t--)
            {
                res+=ch;
            }
           
        }
        reverse(res.begin(),res.end());
        return res;
    }


};

// { Driver Code Starts.

int main() {
    
    
    int t;cin>>t;
    while(t--)
    {
        int k;
        cin>>k;
        string s;
        cin>>s;
        Solution obj;
        cout<<obj.Reduced_String(k,s)<<"\n";
        
    }
    
	return 0;
}  // } Driver Code Ends