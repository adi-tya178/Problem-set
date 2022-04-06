class Solution {
public:
     void dfs(vector<vector<int>> &board,int i,int j)
    {
        int n = board.size();
        int m = board[0].size();
        if(i<0 || j<0 || i>=n || j>=m )return ;
        if(board[i][j]!=1)return ;
        board[i][j]=-1;
         dfs(board,i-1,j);
        dfs(board,i+1,j);
        dfs(board,i,j-1);
        dfs(board,i,j+1);
    }
    int numEnclaves(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(i==0 || j==0 || j==m-1 || i==n-1)
                {
                    dfs(grid,i,j);
                }
            }
        }
        int temp=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==1)
                {
                    temp++;
                }
            }
        }
        return temp;
    }
};