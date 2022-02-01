class Solution {
public:
    int maxProfit(vector<int>& nums) {
        int n = nums.size();
        int dp[n+1];
        int sell[n+1];
        sell[0] = 0;
        dp[0] = nums[0];
        for(int i=1;i<n;i++)
        {
                dp[i] = min(nums[i],dp[i-1]);
                sell[i] = max(sell[i-1],nums[i]-dp[i-1]);
        }
        return sell[n-1];
        
    }
};