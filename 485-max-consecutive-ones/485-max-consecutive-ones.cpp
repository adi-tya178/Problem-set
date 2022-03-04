class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int curr=nums[0]==0?0:1;
        int maxi=0;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]==1)
            {
                curr++;
            }
            else
            {
                maxi = max(maxi,curr);
                curr=0;
            }
        }
        maxi = max(curr,maxi);
        return maxi;
    }
};