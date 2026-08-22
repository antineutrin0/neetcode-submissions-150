class Solution {
    int countMaxArea(vector<vector<int>>& grid, int i, int j, vector<vector<bool>>& visited) {

        if (i < 0 || j < 0 ||
            i >= grid.size() ||
            j >= grid[0].size())
            return 0;

        if (visited[i][j] || grid[i][j] == 0)
            return 0;

        visited[i][j] = true;

        int area = 1;
        
        area += countMaxArea(grid, i + 1, j, visited);
        area += countMaxArea(grid, i - 1, j, visited);
        area += countMaxArea(grid, i, j + 1, visited);
        area += countMaxArea(grid, i, j - 1, visited);

        return area;
    }

public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {

        vector<vector<bool>> visited(
            grid.size(),
            vector<bool>(grid[0].size(), false)
        );

        int maxArea = 0;

        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[0].size(); j++) {

                if (grid[i][j] == 1 && !visited[i][j]) {

                    int area = countMaxArea(
                        grid, i, j, visited
                    );

                    maxArea = max(maxArea, area);
                }
            }
        }

        return maxArea;
    }
};