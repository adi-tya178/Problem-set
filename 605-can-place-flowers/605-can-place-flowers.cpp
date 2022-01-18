class Solution {
public:
    bool canPlaceFlowers(vector<int>& nums, int n) {
        int zeroes=0;
        for(auto x:nums)
        {
            if(x==0)
            {
                zeroes++;
            }
        }
        nums.insert(nums.begin(),0);
        nums.insert(nums.end(),0);
        if(n>zeroes)return false;
        
        for(int i=1;i<nums.size()-1 && n>0;i++)
        {
            if(nums[i]==0 && nums[i-1]!=1 && nums[i+1]!=1)
            {
                n--;
                nums[i] = 1;
            }
        }
        return n<=0;
    }
};