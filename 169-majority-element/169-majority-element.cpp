class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> m;
        for(auto x:nums)
        {
            m[x]++;
        }
        int ans,temp=INT_MIN;
        for(auto x:m)
        {
            if(x.second>temp)
            {
                temp=x.second;
                ans = x.first;
            }
        }
        return ans;
    }
};