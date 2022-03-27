class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        int n = mat.size();
        vector<pair<int,int>> v;
        for(int i=0;i<n;i++)
        {
            int sum=0;
            for(auto x:mat[i])
            {
                sum+=x;
            }
            v.push_back({sum,i});
        }
        sort(v.begin(),v.end());
        vector<int> ans(k);
        for(int i=0;i<k;i++)
        {
            ans[i] = v[i].second;
        }
        return ans;
        
    }
};