class Solution {
public:
   
    int twoCitySchedCost(vector<vector<int>>& costs) {
        
std::sort(costs.begin(), costs.end(),
          [](const std::vector<int>& a, const std::vector<int>& b) {
     return a[0]-a[1] < b[0]-b[1];
});
        int n = costs.size();
        int ans1=0;
      for(int i=0;i<n/2;i++)
      {
          ans1+=costs[i][0];
      }
        for(int i=n/2;i<n;i++)
        {
            ans1+=costs[i][1];
        }
        return ans1;
        
    }
};