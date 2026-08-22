class Solution {
public:
    unordered_set<int>cols;
    unordered_set<int>posDiagonals;
    unordered_set<int>negDiagonals;
    vector<vector<string>>res;

public:
void backtrack(int row,int n, vector<string>&board){
     if(row==n)
     {
        res.push_back(board);
        return;
     }
     for(int col=0;col<n;col++){
        if(cols.count(col)||posDiagonals.count(row+col)||negDiagonals.count(row-col))
        continue;
        cols.insert(col);
        posDiagonals.insert(row+col);
        negDiagonals.insert(row-col);
        board[row][col]='Q';
        backtrack(row+1,n,board);
        cols.erase(col);
        posDiagonals.erase(row+col);
        negDiagonals.erase(row-col);
        board[row][col]='.';
     }
}
public:
    vector<vector<string>> solveNQueens(int n) {
        vector<string> board(n, string(n, '.'));

          backtrack(0,n,board);
          return res;

    }
};
