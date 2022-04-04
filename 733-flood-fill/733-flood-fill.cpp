class Solution {
public:
    void dfs(vector<vector<int>> &image,int n,int i,int j,int newcolor)
    {
        if(i<0 || j<0 || i>=image.size() || j>=image[0].size() || image[i][j]!=n)return ;
        if(image[i][j]==n)
        {
            image[i][j]=newcolor;
        }
        dfs(image,n,i,j-1,newcolor);
        dfs(image,n,i,j+1,newcolor);
        dfs(image,n,i-1,j,newcolor);
        dfs(image,n,i+1,j,newcolor);
        
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newcolor) {
        if (image[sr][sc] == newcolor) return image;
        int n =image[sr][sc];
        dfs(image,n,sr,sc,newcolor);
        return image;
    }
};