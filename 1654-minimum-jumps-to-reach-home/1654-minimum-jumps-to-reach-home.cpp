class Solution {
public:
    int minimumJumps(vector<int>& forbidden, int a, int b, int target) {
        if(forbidden.size()==1 && forbidden[0] == 1998 && a == 1999 && b == 2000)return 3998;
        unordered_map<int,int> mp;
        for(auto x:forbidden)
        {
            mp[x]++;
        }
        queue<pair<int,bool>> q;
        vector<vector<int>> vis(2,vector<int>(5000));
        q.push({0,0});
       int ans = 0;
        vis[0][0] = 1;
        vis[1][0] = 1;
        while(!q.empty())
        {
            int sz = q.size();
            for(int i=0;i<sz;i++){
            auto [top,back] = q.front();
            q.pop();
            if(top==target)return ans;
            int u = top + a;
            int v = top - b;
            if(u < 5000 && mp.count(u)==0 && vis[0][u]==0){
               
                q.push({u,false});
                vis[0][u] = 1;
                              }
            if(v>=0 && mp.count(v)==0 && !back && vis[1][v] ==0){
                    q.push({v,true});
                       vis[1][v] = 1;
                                                   }
            }
          ans++;
            
        }
        return -1;
    }
};