class Solution {
public:
    int countSubstrings(string s) {
      int n= s.length();
    bool dp[n][n];
    memset(dp,false,sizeof(dp));
    int temp=0,flag,flag1;
    for(int i=n-1;i>=0;i--)
    {
        for(int j=i;j<=n-1;j++)
        {
            if(i==j)
            {
                dp[i][j]=true;
            }
            else if(s[i]==s[j])
            {
                if(j-i==1)
                {
                    dp[i][j]=true;
                }
                else{
                    dp[i][j]=dp[i+1][j-1];
                }
            }
            if(dp[i][j] )
            {
               temp++;
            }
        }
    }
        return temp;
    }
};