class Solution {

    int totalTime(vector<vector<int>>& grid, queue<pair<int,int>>&q){
        int cnt=0;

        while(!q.empty()){
            auto [i,j]=q.front();
            if(i==-1)
            {
                cnt++;
                q.pop();
                if(!q.empty())
                q.push({-1,-1});
                continue;
            }
            q.pop();
            if(i>0&&grid[i-1][j]==1){
                q.push({i-1,j});
                grid[i-1][j]=2;
            }

            if(i+1<grid.size()&&grid[i+1][j]==1){
                q.push({i+1,j});
                grid[i+1][j]=2;
            }

            if(j>0&&grid[i][j-1]==1){
                q.push({i,j-1});
                grid[i][j-1]=2;
            }

            if(j+1<grid[0].size()&&grid[i][j+1]==1){
                q.push({i,j+1});
                grid[i][j+1]=2;
            }
              
        }

        return cnt;
    }

public:
    int orangesRotting(vector<vector<int>>& grid) {

        queue<pair<int,int>>q;
        int time=0;



        for(int i=0;i<grid.size();i++)
        for(int j=0;j<grid[0].size();j++){
            if(grid[i][j]==2)
             q.push({i,j});
        }

        q.push({-1,-1});

        int res=totalTime(grid,q);

        for(int i=0;i<grid.size();i++)
        for(int j=0;j<grid[0].size();j++){
            if(grid[i][j]==1)
            return -1;
        }


        return res-1;


    }
};
