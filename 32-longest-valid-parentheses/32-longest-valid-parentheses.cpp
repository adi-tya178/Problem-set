class Solution {
public:
    int longestValidParentheses(string s) {
        int open=0,close=0,n = s.length(),ans=0;
        for(auto x:s)
        {
            if(x=='(')open++;
            else
            {
                close++;
            }
            if(open==close)ans=max(ans,2*open);
            else if(open<close)
            {
                open=close=0;
            }
        }
        open=close=0;
        for(int i=n-1;i>=0;i--)
        {
            
            if(s[i]=='(')open++;
            else
            {
                close++;
            }
            if(open==close)ans=max(ans,2*open);
            else if(open>close)
            {
                open=close=0;
            }
        }
        return ans;
    }
};