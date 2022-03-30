class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        vector<int> dis(n+1,INT_MAX);
        dis[0] = INT_MIN;
        dis[k] = 0;
        
        for(int i=0;i<n-1;i++)
        {
           for(int j=0;j<times.size();j++)
           {
               int u = times[j][0];
               int v = times[j][1];
               int cost = times[j][2];
               
               if(dis[u] != INT_MAX && dis[u]+cost<dis[v])
               {
                   dis[v] = dis[u] + cost;
               }
           }
        }
         // for(auto x:dis)
         // {
         //     cout<<x<<endl;
         // }
        int maxi = *max_element(dis.begin(),dis.end());
        
        return maxi==INT_MAX?-1:maxi;
    }
};