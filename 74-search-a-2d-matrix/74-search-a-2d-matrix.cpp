class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int target) {
        int m = mat[0].size();
          if(m==1 && mat.size()==1)
          {
            if(mat[0][0]==target){return true;}
              else return false;
          }
        for(int i=0;i<mat.size();i++)
        {
            if(mat[i][0]<=target && mat[i][m-1]>=target)
            {
                int start=0,end=m-1;
                
                while(start<=end)
                {
                    int mid = (start+end)/2;
                    if(mat[i][mid]==target)return true;
                    else if(mat[i][mid]>target)
                    {
                        end=mid-1;
                    }
                    else
                    {
                        start=mid+1;
                    }
                }
            }
        }
        return false;
    }
};