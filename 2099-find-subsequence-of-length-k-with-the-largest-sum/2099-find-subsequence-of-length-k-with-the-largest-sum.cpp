class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
            int n = nums.size();
        vector<pair<int,int>> v;
        for(int i=0;i<n;i++)
        {
            v.push_back({nums[i],i});
        }
      sort(v.begin(),v.end());
        vector<pair<int,int>> ans;
        int i=n-1;
        while(i>=0 && k)
        {
           ans.push_back({v[i].second,v[i].first});
            i--;
            k--;
        }
       
        sort(ans.begin(),ans.end());
        vector<int> res;
        for(auto x:ans)
        {
            res.push_back(x.second);
        }
        return res;
        
    }
};