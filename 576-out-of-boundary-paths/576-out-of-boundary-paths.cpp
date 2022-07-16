class Solution {
public:
    int mod = 1e9 + 7;
    int dp[51][51][51];
    int dfs(int m,int n,int maxMoves,int currRow, int currColumn)
    {
         if(currRow<0 || currRow>=m || currColumn<0 || currColumn>=n)return 1;
        
        if(maxMoves<=0)return 0;
        if(dp[maxMoves][currRow][currColumn]!=-1)return dp[maxMoves][currRow][currColumn];
        
       
        //if(vis[currRow][currColumn] == 1)return 0;
        //vis[currRow][currColumn] = 1;
        int left = dfs(m,n,maxMoves-1,currRow-1,currColumn)%mod;
        int right = dfs(m,n,maxMoves-1,currRow+1,currColumn)%mod;
        int up = dfs(m,n,maxMoves-1,currRow,currColumn-1)%mod;
        int down = dfs(m,n,maxMoves-1,currRow,currColumn+1)%mod;
       // vis[currRow][currColumn] = 0;
        
        return dp[maxMoves][currRow][currColumn] = (((left + right )%mod+ up )%mod+ down)%mod;
    }
    int findPaths(int m, int n, int maxMove, int startRow, int startColumn) {
        int ans = 0;
        memset(dp,-1,sizeof(dp));
        return dfs(m,n,maxMove,startRow,startColumn);
    }
};