class Solution {
public:
    int dp[41][41];
    int maxi[41][41];
    int helper(int left,int right)
    {
        if(left==right)return 0;
        
        if(dp[left][right]!=-1)return dp[left][right];
        
        int ans = 1<<30;
        
        for(int i=left;i<right;i++)
        {
            ans = min(ans,maxi[left][i]*maxi[i+1][right]+ helper(left,i) + helper(i+1,right));
        }
        dp[left][right] = ans;
        return ans;
    }
    int mctFromLeafValues(vector<int>& arr) {
       memset(dp,-1,sizeof(dp));
        for(int i=0;i<arr.size();i++){
            maxi[i][i] = arr[i];
            for(int j=i+1;j<arr.size();j++)
                maxi[i][j] = max(maxi[i][j-1], arr[j]);
        }
        int n = arr.size();
        return helper(0,n-1);
    }
};