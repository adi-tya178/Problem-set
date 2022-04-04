class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int n=0;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[i].size();j++)
            {
                if(grid[i][j]=='1')
                {
                    n+=1;
                    dfs(grid,i,j);
                }
            }
        }
        return n;
    }
    void dfs(vector<vector<char>> &grid,int i,int j)
    {
        if(i<0 || i>=grid.size() || j<0 || j>=grid[i].size() || grid[i][j]!='1')return ;
        grid[i][j]='2';
        dfs(grid,i+1,j);
        dfs(grid,i-1,j);
        dfs(grid,i,j+1);
        dfs(grid,i,j-1);
    }
};