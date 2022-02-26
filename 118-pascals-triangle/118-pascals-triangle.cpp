class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res;
        
        vector<int> temp;
        temp.push_back(1);
        res.push_back(temp);
      for(int i=0;i<numRows-1;i++)
        {
          for(int j=i;j>0;j--)
          {
              temp[j]=temp[j]+temp[j-1];
          }
          temp.push_back(1);
          res.push_back(temp);
            
            
        }
        return res;
    }
};