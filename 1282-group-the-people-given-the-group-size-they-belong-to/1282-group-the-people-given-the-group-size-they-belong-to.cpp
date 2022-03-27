class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& nums) {
      vector<pair<int,int>> v;
        for(int i=0;i<nums.size();i++)
        {
            v.push_back({nums[i],i});
        }
        int n = nums.size();
        sort(v.begin(),v.end());
        vector<vector<int>> ans;
        int i=0;
        while(i<n)
        {
            int t = v[i].first;
            vector<int> temp;
            
            while(t--)
            {
                temp.push_back(v[i].second);
                i++;
            }
            ans.push_back(temp);
            
        }
        return ans;
    }
};
        