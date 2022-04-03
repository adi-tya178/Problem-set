class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size();
        int temp=0;
        int x=INT_MIN;
        int lastind=-1;
        int i=1;
        while(i<n)
        {
            if(nums[i]>nums[i-1])
            {
                lastind=i;
            }
            i++;
        }
       if(lastind==-1)
       {
           for(int i=0;i<n/2;++i)
           {swap(nums[i],nums[n-i-1]);
          }
           return;
       }
        int num=nums[lastind];
        temp=lastind;
        for(int i=lastind;i<n;i++)
        {
            if(nums[i]>nums[lastind-1] && nums[i]<nums[temp]){
                temp=i;
            }
        }
        swap(nums[temp],nums[lastind-1]);
        sort(nums.begin()+lastind,nums.end());
    }
};