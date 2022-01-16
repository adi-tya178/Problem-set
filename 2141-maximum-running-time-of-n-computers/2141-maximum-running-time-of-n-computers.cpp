class Solution {
public:
    bool isValid(long long int n,vector<int> &batteries,long long int mid)
    {
        long long int total = n * mid;
        for(int i=0;i<batteries.size();i++)
        {
            total= total - min((long long)batteries[i],mid);
        }
        
        return total<=0;
    }
    long long maxRunTime(int n, vector<int>& nums) {
        sort(nums.begin(),nums.end());
        long long int lo = 0 ;
        long long int hi=0;
        for(auto x:nums)
        {
            hi+=x;
        }
        long long int ans=0;
        while(lo<=hi)
        {
            long long int mid = (lo + hi)/2;
            
            if(isValid(n,nums,mid))
            {
                ans = mid;
                lo = mid+1;
            }
            else
            {
                hi = mid - 1;
            }
        }
        return ans;
    }
};