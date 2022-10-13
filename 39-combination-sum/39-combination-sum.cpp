class Solution {
public:
    vector<vector<int>> finalAns;
    void solve(int n, vector<int>& cand, int index, vector<int>& v){
        if (n == 0){
            finalAns.push_back(v);
            return ;
        }
        
        if (n < 0){
            return ;
        }
        
        if (index >= cand.size()){
            return;
        }
        v.push_back(cand[index]);
        solve(n - cand[index], cand, index, v);
        v.pop_back();
        solve(n, cand, index+1, v);
        return;
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> v;
        solve(target, candidates, 0, v);
        return finalAns;
    }
};