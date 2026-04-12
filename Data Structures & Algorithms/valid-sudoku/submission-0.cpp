class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i=0;i<9;i++)
         {  
            vector<int>vis(10,0); 
            for(int j=0;j<9;j++){
            if(board[i][j] == '.') continue;
            int chr=board[i][j]-'0';
              if(vis[chr]==1)
              return false;
              vis[chr]=1;
          }
          
          }

          for(int i=0;i<9;i++)
         {  
            vector<int>vis(10,0); 
            for(int j=0;j<9;j++){
            if(board[j][i] == '.') continue;
            int chr=board[j][i]-'0';
              if(vis[chr]==1)
              return false;
              vis[chr]=1;
          }
          
          }

          for(int i=0;i<9;i+=3)
            {
                for(int j=0;j<9;j+=3)
                  {
                    vector<int>vis(10,0);
                    for(int k=0;k<3;k++)
                     for(int l=0;l<3;l++){
                        if(board[i+k][j+l] == '.') continue;
                        int chr=board[i+k][j+l]-'0';
                        if(vis[chr]==1)
                        return false;
                        vis[chr]=1;
                     }
                  }
            }

            return true;
          
    }
};
