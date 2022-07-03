class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
     
        int n = nums.size();
        vector<int> dp(n,1);
        vector<int> dp2(n,1);
        for(int i=1;i<n;i++)
        {
            for(int j=0;j<i;j++)
            {
                if(nums[j]-nums[i]<0)
                {
                    dp2[i] = max(dp2[i],dp[j]+1);
                  
                }
                else if(nums[j]-nums[i]>0)
                {
                    dp[i] = max(dp[i],dp2[j]+1);
                   
                }
            }
        }
        return max(dp[n-1],dp2[n-1]);
    }
};