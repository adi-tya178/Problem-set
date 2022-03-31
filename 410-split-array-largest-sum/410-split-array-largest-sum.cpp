class Solution {
public:
    bool isvalid(vector<int> &nums,int m,int mid)
    {
        int k=1;//always remember
        int sum=0;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            if(sum>mid)
            {
                k++;
                sum=nums[i];
            }
        }
        return k<=m;
    }
    int splitArray(vector<int>& nums, int m) {
        int low=*max_element(nums.begin(),nums.end());
        int high = accumulate(nums.begin(),nums.end(),0);
        int ans=INT_MIN;
        while(low<=high)
        {
            int mid = low + (high-low)/2;
            if(isvalid(nums,m,mid))
            {
                ans=mid;
                high = mid-1;
            }
            else
            {
                low = mid+1;
            }
            
        }
        return ans;
    }
};