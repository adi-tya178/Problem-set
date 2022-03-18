class Solution {
public:
    string smallestSubsequence(string s) {
        vector<int> cnt(256,0);
        vector<int> vis(256, false);
        
        for(auto x:s)
        {
            cnt[x]++;
        }
        string res = "0";
        for(auto x:s)
        {
            cnt[x]--;
            if(vis[x])continue;
            while(x<res.back() && cnt[res.back()]>0)
            {
                vis[res.back()]=false;
                res.pop_back();
            }
            
            vis[x] = true;
            res+=x;
        }
        return res.substr(1);
    }
};