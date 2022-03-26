class Solution {
public:
    int dp[1001][1001];
    int suff[1001];
    void s(string &floor)
    {
        int n = floor.length();
         suff[n-1] = floor[n-1]-'0';
        for(int i=n-2;i>=0;i--)
        {
            if(floor[i]=='1')
            {
                suff[i] =1 +  suff[i+1]; 
            }
            else
            {
                suff[i] = suff[i+1];
            }
        }
    }
    int helper(string &floor, int black,int idx,int len)
    {
        if(idx>=floor.length())return 0;
        if(black==0)return suff[idx];
        
        if(dp[idx][black]!=-1)return dp[idx][black];
        
        int op1 = helper(floor,black-1,idx+len,len);
        int op2 = INT_MAX;
        if(floor[idx]=='1')
        {
            op2 = helper(floor,black,idx+1,len)+1;
        }
        else
        {
            op2 = helper(floor,black,idx+1,len);
        }
        
        return dp[idx][black] = min(op1,op2);
    }
    int minimumWhiteTiles(string floor, int numCarpets, int carpetLen) {
        memset(dp,-1,sizeof(dp));
        
        s(floor);
        int n = floor.length();
       
       
        
        return helper(floor,numCarpets,0,carpetLen);
    }
};