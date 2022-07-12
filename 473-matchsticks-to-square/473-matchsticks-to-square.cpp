class Solution {
public:
    bool helper(vector<int> &nums,vector<int> &vis,int ind,int side,int currSum,int k)
    {
        //cout<<ind<<" "<<currSum<<" "<<k<<endl;
       if(k==0)return 1;
        if(currSum == side)return helper(nums,vis,0,side,0,k-1);
         if(ind>=nums.size())return 0;
        for(int i=ind;i<nums.size();i++)
        {
            if(currSum + nums[i]<=side && vis[i]==0)
            {
                vis[i] = 1;
                
                if(helper(nums,vis,i+1,side,currSum+nums[i],k))
                {
                    
                    return true;
                }
                else
                {
                    vis[i] = 0;
                }
                
            }
        }
        return 0;
    }
    bool makesquare(vector<int>& nums) {
        int n = nums.size();
        int sum = accumulate(nums.begin(),nums.end(),0);
        if(sum%4!=0)return false;
        int side = sum/4;
        vector<int> vis(n,0);
        return helper(nums,vis,0,side,0,4);
        
        
    }
};