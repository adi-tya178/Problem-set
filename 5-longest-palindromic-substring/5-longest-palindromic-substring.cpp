class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.length();
        int maxlen = INT_MIN;
        vector<vector<bool>> dp(n,vector<bool>(n,0));
        string res;
        for(int i=n-1;i>=0;i--)
        {
            for(int j=i;j<n;j++)
            {
                if(i==j)
                {
                    dp[i][j]=true;
                }
                else
                {
                    if(s[i]==s[j])
                    {
                        if(j-i<2)
                        {
                            dp[i][j] = true;
                        }
                        else
                        {
                            dp[i][j] = dp[i+1][j-1];
                        }
                    }
                }
                
                if(dp[i][j])
                {
                    if(j-i+1>maxlen)
                    {
                        maxlen = j-i+1;
                        res = s.substr(i,j-i+1);
                    }
                }
            }
        }
        return res;
    }
};