class Solution {
public:
    vector<vector<int>> dir = {{1,0},{-1,0},{0,-1},{-1,0},{-1,1},{1,-1},{1,1},{-1,-1}};
    bool isValid(int n,int i,int j)
    {
        if(i<0 || j< 0 || i>=n || j>=n)return false;
        return true;
    }
   bool safeCheck(vector<string>& board, int row, int col){
        // check upper element
      int n = board.size();
      int duprow = row;
      int dupcol = col;

      while (row >= 0 && col >= 0) {
        if (board[row][col] == 'Q')
          return false;
        row--;
        col--;
      }

      col = dupcol;
      row = duprow;
      while (col >= 0) {
        if (board[row][col] == 'Q')
          return false;
        col--;
      }

      row = duprow;
      col = dupcol;
      while (row < n && col >= 0) {
        if (board[row][col] == 'Q')
          return false;
        row++;
        col--;
      }
      return true;
    }
    void helper(vector<vector<string>> &board,vector<string> &temp,int j)
    {
        int n = temp.size();
        if(j==n)
        {
            board.push_back(temp);
            return;
        }
        
        for(int i=0;i<n;i++)
        {
            if(safeCheck(temp,i,j))
            {
                temp[i][j] = 'Q';
                helper(board,temp,j+1);
                temp[i][j] = '.';
            }
            
        }
        
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> board;
        vector<string> currentBoard(n,string (n,'.'));
        
        helper(board,currentBoard,0);
        return board;
        
    }
};