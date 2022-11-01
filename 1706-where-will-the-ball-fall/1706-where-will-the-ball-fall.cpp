class Solution {
    
    int solve(vector<vector<int>>& grid, int row, int col) {
        
        if (row >= grid.size()) return col;
        
        if ((grid[row][col] == 1 and (col+1 >= grid[0].size() or grid[row][col+1] == -1)) or
            (grid[row][col] == -1 and (col-1 < 0 or grid[row][col-1] == 1))) return -1;
        
        return solve(grid, row+1, col + grid[row][col]);
    }
    
public:
    vector<int> findBall(vector<vector<int>>& grid) {
        
        vector<int> ans(grid[0].size());
        
        for (int i=0; i<grid[0].size(); i++) {
            ans[i] = solve(grid, 0, i);
        }
        
        return ans;
    }
};