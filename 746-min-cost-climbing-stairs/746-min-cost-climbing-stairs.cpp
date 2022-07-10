class Solution {
public:
    vector<int> dp;
    int helper(vector<int> &cost,int ind)
    {
        if(ind>=cost.size())return 0;
        if(dp[ind]!=-1)return dp[ind];
        
        int temp1 = cost[ind] + helper(cost,ind+1);
        int temp2 = cost[ind] + helper(cost,ind+2);
        
        return dp[ind] = min(temp1,temp2);
    }
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        dp.resize(n+1,-1);
        return min(helper(cost,0),helper(cost,1));
        
    }
};