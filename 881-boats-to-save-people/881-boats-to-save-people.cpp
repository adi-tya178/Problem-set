class Solution {
public:
    int numRescueBoats(vector<int>& nums, int limit) {
        sort(nums.begin(),nums.end());
        int i=0;
       
        int n = nums.size();
         int j=n-1;
        int boat=0;
        while(i<=j)
        {
            if(nums[i] + nums[j] <= limit)
            {
                boat++;
                i++;
                j--;
            }
            else
            {
                boat++;
               j--; 
            }
        }
        
        return boat;
    }
};