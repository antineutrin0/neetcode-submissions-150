class Solution {
    public:
    int islandCount=0;
   void countIslands(vector<vector<char>>& grid, int i, int j, vector<vector<bool>> &visited){
      if(i<0||j<0||i>=grid.size()||j>=grid[0].size())
      return;
      if(visited[i][j])
       return;
      else
      visited[i][j]=true;
      if(grid[i][j]=='0')
      return;
      countIslands(grid,i+1,j,visited);
      countIslands(grid,i,j+1,visited);
      countIslands(grid,i-1,j,visited);
      countIslands(grid,i,j-1,visited);        
}
public:
    int numIslands(vector<vector<char>>& grid) {
        vector<vector<bool>> visited(grid.size(),vector<bool>(grid[0].size(),   false));

         for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++)

            if(grid[i][j]=='1'&&visited[i][j]==false)
            {
                islandCount++;
                countIslands(grid,i,j,visited);
            }

         }
         return islandCount;

    }
};
