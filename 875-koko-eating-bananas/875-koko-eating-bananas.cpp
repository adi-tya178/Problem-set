class Solution {
public:
    bool isvalid(vector<int> nums,int k,int h)
    {
        int sum=0;
        for(int i=0;i<nums.size();i++)
        {
           sum+=(nums[i]%k==0)?nums[i]/k:nums[i]/k+1;
        }
        return sum<=h;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int start = 1;
        int end = *max_element(piles.begin(),piles.end());
        if(h==piles.size())return end;
        int ans = INT_MAX;
        while(start<=end)
        {
            int mid = start + (end-start)/2;
            if(isvalid(piles,mid,h))
            {
                ans=min(ans,mid);
                end=mid-1;
            }
            else
            {
                start = mid+1;
            }
        }
        return ans;
    }
};