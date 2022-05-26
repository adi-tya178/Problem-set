class Solution {
public:
        static bool comp(vector<int> &a, vector<int> &b)
        {
            if (a[0] == b[0]) return a[1] > b[1];
            return a[0] < b[0];
        }

        int maxEnvelopes(vector<vector < int>> &env)
        {
        sort(env.begin(), env.end(), comp);
        int n = env.size();
       	//int ans = 0;
       	//vector<int> dp(n+1, 1);
        vector<int> v;
        for (auto x: env)
        {
            if (v.empty() || v.back() < x[1]) v.push_back(x[1]);
            else
            {
                auto it = lower_bound(v.begin(), v.end(), x[1]);
                *it = x[1];
            }
        }
        
        return v.size();
    }
};