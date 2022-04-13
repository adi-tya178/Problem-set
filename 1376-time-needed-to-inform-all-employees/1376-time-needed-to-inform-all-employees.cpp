class Solution {
public:
    int numOfMinutes(int n, int headID, vector<int>& manager, vector<int>& informTime) {
        map<pair<int,int>,int> mp;
        vector<vector<int>> adj(n+1);
        int root;
        for(int i=0;i<manager.size();i++)
        {
           int u = manager[i];
            int  v = i;
           
          
            if(u!=-1)
            {
                 int w = informTime[u];
                pair<int,int> e = {u,v};
            
                 mp[e] = w;
                adj[u].push_back(v);
            }
            else if(u==-1)root=i;
        }
        queue<int> q;
        vector<int> dis(n+1,-1);
        dis[root] = 0;
        q.push(root);
        while(!q.empty())
        {
            int top = q.front();
            q.pop();
            for(auto x:adj[top])
            {
                
                
                pair<int,int> e = {top,x};
                dis[x] = dis[top] + mp[e];
                q.push(x);
            }
        }
        return *max_element(dis.begin(),dis.end());
    }
};