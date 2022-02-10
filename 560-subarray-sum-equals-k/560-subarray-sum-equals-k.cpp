class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int sum = 0;
        int ans=0;
        unordered_map<int,int> m;
        m[0] = 1;
        for(auto x:nums)
        {
            sum+=x;
            ans+=m[sum-k];
            m[sum]++;
        }
        return ans;
            
    }
};