class Solution {
public:
    void dfs(vector<vector<int>> &adj,vector<bool> &vis,int i)
    {
        vis[i]=true;
        for(auto x:adj[i])
        {
            if(!vis[x])
            {
               dfs(adj,vis,x);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        vector<vector<int>> adj(n);
        vector<bool> vis(n+1,false);
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<isConnected[i].size();j++)
            {
                if(isConnected[i][j]==1)
                {
                    adj[i].push_back(j);
                    adj[j].push_back(i);
                }
            }
        }
        int count=0;
        for(int i=0;i<n;i++)
        {
           
            if(!vis[i])
            {
                 count++;
                dfs(adj,vis,i);
            }
        }
        return count;
    }
};