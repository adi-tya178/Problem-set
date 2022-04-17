class Solution {
public:
    bool solve(int i,vector<vector<int>> &arr, vector<int> &likes)
    {
        queue<int> q;
        q.push(i);
        likes[i]=1;
        while(!q.empty())
        {
            int node = q.front();
            q.pop();
            for(auto it:arr[node])
            {
                if(likes[it]==-1)
                {
                    likes[it]=1-likes[node];
                    q.push(it);
                }
                else if(likes[it]==likes[node])
                {
                    return false;
                }
            }
        }
        return true;
    }
    bool possibleBipartition(int n, vector<vector<int>>& dislikes) {
        vector<int> likes(n+1,-1);
        vector<vector<int>> arr(n+1);
        for(int i=0;i<dislikes.size();i++)
        {
            int u = dislikes[i][0];
            int v = dislikes[i][1];
            arr[u].push_back(v);
            arr[v].push_back(u);
        }
        for(int i=0;i<arr.size();i++)
        {
            if(likes[i]==-1)
            {
                if(!solve(i,arr,likes))
                {
                    return false;
                }
            }
        }
        return true;
    }
};