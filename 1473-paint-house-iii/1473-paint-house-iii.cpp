class Solution {
public:
       vector<vector<vector<int>>> dp;
    int helper(vector<int> &houses,int lc,vector<vector<int>> &cost,int ind,int target)
    {
        if(target==0 && ind==houses.size())return 0;
        
        if(ind==houses.size() || target<0)return 1e9;
        
        if(dp[ind][target][lc]!=-1)return dp[ind][target][lc];
        
        if(houses[ind]!=0)
        {
            if(houses[ind] == lc)
            {
                return dp[ind][target][lc] = helper(houses,lc,cost,ind+1,target);
            }
            else
            {
                return dp[ind][target][lc] = helper(houses,houses[ind],cost,ind+1,target-1);
            }
        }
        int ans = 1e9;
        int col = cost[0].size();
        for(int i=0;i<col;i++)
        {
            int newColor = i+1;
            int temp ;
            if(lc == newColor)
            {
                
                temp =cost[ind][i] + helper(houses,lc,cost,ind+1,target);
            }
            else
            {
                temp = cost[ind][i] + helper(houses,newColor,cost,ind+1,target-1);
            }
            ans = min(ans,temp);
        }
        return dp[ind][target][lc] = ans;
    }
    int minCost(vector<int>& houses, vector<vector<int>>& cost, int m, int n, int target)    {
        int lc = 0;
       dp.resize(m+1,vector<vector<int>>(target+1,vector<int>(n+1,-1)));
        int ans = helper(houses,lc,cost,0,target);
        
        return ans>=1e9 ? -1: ans;
        
    }
};