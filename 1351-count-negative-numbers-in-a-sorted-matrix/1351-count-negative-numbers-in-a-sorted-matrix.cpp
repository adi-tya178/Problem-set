class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int ans = 0;
        
        int n = grid.size();
        int m = grid[0].size();
        for(int i=0;i<n;i++)
        {
            int j = m-1;
            while(j>=0)
            {
               if(grid[i][j]<0)ans++;
                else
                {
                    break;
                }
                j--;
            }
        }
        return ans;
    }
};