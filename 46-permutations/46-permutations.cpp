class Solution {
    
    vector<vector<int>> ans;
    
    void solve(vector<int>& nums, vector<int>& v, int n, unordered_map<int, bool>& used) {
        
        if (n==0) {
            ans.push_back(v);
            return;
        }
        
        for (auto num: nums) {
            
            if (used[num]) continue;
            
            v.push_back(num);
            used[num] = true;
            solve(nums, v, n-1, used);
            
            used[num] = false;
            v.pop_back();
        }
    }
    
public:
    
    vector<vector<int>> permute(vector<int>& nums) {
        
        unordered_map<int,bool> used;
        for (auto num: nums) {
            used[num] = false;
        }
        
        vector<int> v;
        solve(nums, v, nums.size(), used);
        
        return ans;
    }
};