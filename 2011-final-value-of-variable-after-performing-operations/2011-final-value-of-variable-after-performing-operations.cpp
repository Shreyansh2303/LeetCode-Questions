class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        
        int ans = 0;
        
        for (auto& op: operations) {
            ans += op=="X++" or op=="++X"? 1: -1;
        }
        
        return ans;
    }
};