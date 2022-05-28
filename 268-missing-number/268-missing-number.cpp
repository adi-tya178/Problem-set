class Solution {
public:
    int missingNumber(vector<int>& nums) {
       // sort(nums.begin(),nums.end());
        int i=0;
        int result=nums.size();
        //int n=nums.size();
            for(auto x:nums)
        {
           result^=x;
           result^=i;
                i++;
                
        }
        return result;
    }
};