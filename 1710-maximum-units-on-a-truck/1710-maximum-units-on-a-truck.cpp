class Solution {
public:
    static bool comp(vector<int> &a,vector<int> &b)
    {
        return a[1]>b[1];
    }
    int maximumUnits(vector<vector<int>>& nums, int truckSize) {
        int n = nums.size();
        int ans = 0;
        sort(nums.begin(),nums.end(),comp);
        // for(int i=0;i<n;i++)
        // {
        //     cout<<nums[i][0]<<" "<<nums[i][1]<<endl;
        // }
        for(int i=0;i<n && truckSize>0;i++)
        {
            truckSize-=nums[i][0];
                        //cout<<truckSize<<endl;
            if(truckSize>0)ans+=nums[i][1]*nums[i][0];
            else 
            {
                truckSize+=nums[i][0];
                ans+=truckSize*nums[i][1];
                truckSize = 0;
            }

        }
        return ans;
    }
};