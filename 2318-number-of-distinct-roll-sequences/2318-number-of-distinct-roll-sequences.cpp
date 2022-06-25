#define ll long long
#define mod 1000000007


class Solution {
public:
    
    int dp[10002][8][8];
    int helper(int idx,int n,int prev,int prev2)
    {
        if(idx==n)return 1;
        if(dp[idx][prev][prev2]!=-1)return dp[idx][prev][prev2];
        ll cnt=0;
        for(int i=1;i<=6;i++)
        {
            if((prev!=i && __gcd(prev,i)==1  && prev2!=i) || prev==0)
            {
               cnt= (cnt + helper(idx+1,n,i,prev)%mod)%mod;
            }
        }
        return dp[idx][prev][prev2]=cnt%mod;
    }
    int distinctSequences(int n) {
        memset(dp,-1,sizeof(dp));
        return helper(0,n,0,0);
    }
};