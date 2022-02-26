class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int maxlen=INT_MIN;
        int flag=0;
        for(int i=0;i<n;i++)
        {
            flag=flag+nums[i];
            maxlen=max(maxlen,flag);
            flag=max(flag,0);
        }
        return maxlen;
    }
};