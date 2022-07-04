class Solution {
public:
    int helper(vector<vector<int>> &temp,vector<int> &dp,int idx)
    {
        if(idx>=temp.size())return 0;
        
        if(dp[idx]!=-1)return dp[idx];
        
        vector<int> v = {temp[idx][1]-1,INT_MAX,INT_MAX};
        
        int next = upper_bound(temp.begin(),temp.end(),v) - temp.begin();
        
        int op1 = temp[idx][2] + helper(temp,dp,next);
        int op2 = helper(temp,dp,idx+1);
        
        return dp[idx] = max(op1,op2);
        
    }
    int jobScheduling(vector<int>& startTime, vector<int>& endTime, vector<int>& profit) {
          int n = startTime.size();
        
        vector<vector<int>> temp(n,vector<int>(3));
      
        for(int i=0;i<n;i++)
        {
            temp[i][0] = startTime[i];
            temp[i][1] = endTime[i];
            temp[i][2] = profit[i];
        }
        vector<int> dp(n+1,-1);
        sort(temp.begin(),temp.end());
        return helper(temp,dp,0);
        
    }
};