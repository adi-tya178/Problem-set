class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int cnt = 1;
        int j = n-1;
        int k = 0;
        vector<vector<int>> mat(n,vector<int>(n,-1));
        while(cnt<=n*n && k<n && j>=0)
        {
            for(int i=k;i<=j;i++)
            {
                if(mat[k][i]==-1){mat[k][i]=cnt;
                cnt++;}
            }
            for(int i=k;i<=j;i++)
            {
                if(mat[i][j]==-1){mat[i][j] = cnt;
                cnt++;}
            }
            for(int i=j;i>=k;i--)
            {
               if(mat[j][i]==-1){ mat[j][i] = cnt;
                cnt++;}
            }
            for(int i=j;i>=k;i--)
            {
                if(mat[i][k]==-1){mat[i][k] = cnt;
                cnt++;}
            }
            k++;
            j--;
        }
        return mat;
    }
};