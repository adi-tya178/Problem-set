class Solution {
public:
    int dfs(vector<vector<int>> &grid,int i,int j)
    {
        if(i<0 || i>=grid.size() || j<0 || j>=grid[0].size() || grid[i][j]==0)return 0;
        
        grid[i][j] = 0;
        int count = 1;
        count+=dfs(grid,i+1,j);
        count+=dfs(grid,i-1,j);
        count+=dfs(grid,i,j+1);
        count+=dfs(grid,i,j-1);
        
        return count;
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int maxi = 0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==1)
                {
                    maxi = max(maxi,dfs(grid,i,j));
                }
            }
        }
        return maxi;
    }
};