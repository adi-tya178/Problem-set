class Solution {
public:
    int maximumWealth(vector<vector<int>>& v) {
        int n = v.size();
        int maxi=0;
        for(int i=0;i<n;i++)
        {
            int sum = 0;
            sum = accumulate(v[i].begin(),v[i].end(),0);
            maxi = max(maxi,sum);
        }
        return maxi;
    }
    
};