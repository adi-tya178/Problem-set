class Solution {
public:
    int specialArray(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int maxi = *max_element(nums.begin(),nums.end());
       vector<int> v(maxi+2,0);
        for(int i=0;i<nums.size();i++)
        {
           v[nums[i]>maxi?maxi:nums[i]]++;
        }
        
        for(int i=maxi;i>0;i--)
        {
            v[i] = v[i+1] + v[i];
            if(v[i]==i)return i;
            
        }
        return -1;
    }
};