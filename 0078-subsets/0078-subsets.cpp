class Solution {
    
    vector<vector<int>> ans;
    
    void solve(vector<int>& nums, int n, vector<int>& temp) {
        
        if (n > nums.size() - 1) {
            ans.push_back(temp);
            return;
        }
        
        
        temp.push_back(nums[n]);
        solve(nums, n+1, temp);
        temp.pop_back();
        solve(nums, n+1, temp);
    }
    
public:
    
    vector<vector<int>> subsets(vector<int>& nums) {
        
        vector<int> temp;
        solve(nums, 0, temp);
        
        return ans;
    }
};