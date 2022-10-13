class Solution {
    
    vector<vector<int>> finalAns;
    
    void solve(vector<int>& candidates, int target, vector<int>& v, int n, unordered_map<int,bool>& skipped) {
        
        if (target == 0) {
            finalAns.push_back(v);
            return;
        }
        if (n<0) return;
        if (target<0) return;
        
        if (skipped[candidates[n]]) {
            solve(candidates, target, v, n-1, skipped);
        }
        else {
            
            v.push_back(candidates[n]);
            solve(candidates, target-candidates[n], v, n-1, skipped);
            
            v.pop_back();
            skipped[candidates[n]] = true;
            solve(candidates, target, v, n-1, skipped);
            skipped[candidates[n]] = false;
        }
        
    }
    
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        unordered_map<int,bool> skipped;
        vector<int> v;
        solve(candidates, target, v, candidates.size()-1, skipped);
        
        return finalAns;
    }
};