class Solution {
public:
    bool isValid(int a,int b,int n,int m)
    {
        if(a<0 || b<0 ||a>=n || b>=m)return false;
        return true;
    }
    vector<vector<int>> dir = {{1,0},{0,1},{-1,0},{0,-1},{-1,-1},{1,-1},{-1,1},{1,1}};
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int n = grid.size();
        int ans = 0;
        int m = grid[0].size();
        if(grid[0][0]==1)return -1;
        queue<pair<int,int>> q;
        q.push({0,0});
        while(!q.empty())
        {
            int sz = q.size();
            while(sz--)
            {
                auto [a,b] = q.front();
                q.pop();
                if(a==n-1 && b==m-1)return ans+1;
                for(int i=0;i<dir.size();i++)
                {
                    int na = a + dir[i][0];
                    int nb = b + dir[i][1];
                    if(isValid(na,nb,n,m) && grid[na][nb]!=1)
                    {
                        grid[na][nb] =1;
                        q.push({na,nb});
                    }
                }
            }
            ans++;
            
        }
        return -1;
    }
};