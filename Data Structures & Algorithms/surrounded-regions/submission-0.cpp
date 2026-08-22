class Solution {

    void dfs(vector<vector<char>>& board,int i, int j, vector<vector<bool>>&visited, map<pair<int,int>,int>&notConverted ){

        if(i<0||j<0||i>=board.size()||j>=board[0].size())
      return;
      if(visited[i][j])
       return;
      else
      visited[i][j]=true;
      if(board[i][j]=='X')
      return;
      notConverted.insert({{i,j},1});
      dfs(board,i+1,j,visited,notConverted);
      dfs(board,i,j+1,visited,notConverted);
      dfs(board,i-1,j,visited,notConverted);
      dfs(board,i,j-1,visited,notConverted);

}
public:
    void solve(vector<vector<char>>& board) {
        vector<vector<bool>>visited(board.size(),vector<bool>(board[0].size(),false));
        map<pair<int,int>,int>notConverted;
       int n=board.size();
       int m=board[0].size();
       for(int i=0;i<m;i++){
        if(board[0][i]=='O'&&visited[0][i]==false)
          dfs(board,0,i,visited,notConverted);
       }
       for(int i=0;i<m;i++){
        if(board[n-1][i]=='O'&&visited[n-1][i]==false)
          dfs(board,n-1,i,visited,notConverted);
       }

        for(int i=0;i<n;i++){
        if(board[i][0]=='O'&&visited[i][0]==false)
          dfs(board,i,0,visited,notConverted);
       }

        for(int i=0;i<n;i++){
        if(board[i][m-1]=='O'&&visited[i][m-1]==false)
          dfs(board,i,m-1,visited,notConverted);
       }

       for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(!notConverted.count({i,j})&&board[i][j]=='O')
             board[i][j]='X';
        }
       }

    }
};
