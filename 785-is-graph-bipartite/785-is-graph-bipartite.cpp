class Solution {
public:
    bool solve(int i,vector<vector<int>> &graph,vector<int> &sets)
    {
        queue<int> q;
        q.push(i);
        sets[i]=1;
        while(!q.empty())
        {
            int node = q.front();
            q.pop();
            for(auto it:graph[node])
            {
                if(sets[it]==-1)
                {
                    sets[it]=1-sets[node];
                    q.push(it);
                }
                else if(sets[it]==sets[node])
                {
                    return false;
                }
            }
        }
        return true;
    }
    bool isBipartite(vector<vector<int>>& graph) {
        int n = graph.size();
        vector<int> sets(n+1,-1);
        for(int i=0;i<n;i++)
        {
            if(sets[i]==-1)
            {
                if(!solve(i,graph,sets))
                {
                    return false;
                }
            }
        }
        return true;
    }
};