class Solution {
public:
    vector<vector<int>> dis = {{1,0},{0,1},{-1,0},{0,-1}};
    bool isok(int i,int j,int n,int m)
    {
        if(i<0 || j<0 || i>=n || j>=n)return false;
        
       return true;
            
    }
    int maxDistance(vector<vector<int>>& grid) {
        queue<pair<int,int>> q;
        int n = grid.size();
        int m = grid[0].size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==1)q.push({i,j});
            }
        }
        int dist = 0;
        if(q.size()==n*m)return -1;
        while(!q.empty())
        {
            int size = q.size();
            dist++;
            
            while(size--)
            {
                auto [x,y] = q.front();
                q.pop();
                
                for(auto idx:dis)
                {
                    int a = x + idx[0];
                    int b = y + idx[1];
                    
                    if(isok(a,b,n,m) && grid[a][b]==0)
                    {
                        grid[a][b] = 1;
                        q.push({a,b});
                    }
                }
            }
        }
        return dist-1;
    }
};