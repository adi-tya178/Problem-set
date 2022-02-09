class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        unordered_map<int,int> m;
        int count=0;
        for(auto x:nums)
        {
            m[x]++;
        }
        
      for(auto x:m)
      {
          if(!k && x.second>1 || k && m.count(x.first+k))count++;
      }
        return count;
    }
};