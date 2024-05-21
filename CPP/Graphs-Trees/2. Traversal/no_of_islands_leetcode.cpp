class Solution {
public:
    int count = 0;
    void dfs(int i, int j, vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        // check conditions
        if(i < 0 || j < 0) return;
        if(i >= n || j >= m) return;
        if(grid[i][j] == '0' || grid[i][j] == '2') return;

        grid[i][j] = '2';

        dfs(i - 1, j, grid);
        dfs(i + 1, j, grid);
        dfs(i, j - 1, grid);
        dfs(i, j + 1, grid);
    }

    int numIslands(vector<vector<char>>& grid) {
        for(int i = 0; i < grid.size(); i++) {
            for(int j = 0; j < grid[0].size(); j++) {
                if(grid[i][j] == '1') {
                    count++;
                    dfs(i, j, grid);
                }
            }
        }

        return count;
    }
};