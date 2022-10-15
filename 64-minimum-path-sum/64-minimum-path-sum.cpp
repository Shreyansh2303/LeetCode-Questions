class Solution {
    
    int solve(vector<vector<int>>& grid, vector<vector<int>>& dp, int m, int n) {
        
        if (m == 0 && n== 0) return grid[0][0];
        if (m<0 or n<0 or m>=grid.size() or n>=grid[0].size()) return 99999999;
        
        if (dp[m][n] != -1) return dp[m][n];
        
        int topMax = solve(grid, dp, m-1, n);
        int leftMax = solve(grid, dp, m, n-1);
        
        return dp[m][n] = min(topMax, leftMax) + grid[m][n];
    }
    
public:
    int minPathSum(vector<vector<int>>& grid) {
        
        vector<vector<int>> dp(grid.size(), vector<int>(grid[0].size(), -1));
        
        return solve(grid, dp, grid.size()-1, grid[0].size()-1);
    }
};