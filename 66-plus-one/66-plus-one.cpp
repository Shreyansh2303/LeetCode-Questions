class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        
        int n = digits.size();
        
        int i = n-1;
        while (i>=0 and digits[i] == 9) {
            digits[i] = 0;
            i--;
        }
        
        vector<int> ans;
        
        if (i>=0) {
            
            digits[i]++;
            ans.assign(digits.begin(), digits.end());
        }
        
        
        else {
    
            ans.resize(n+1, 0);
            ans[0] = 1;
        }
        
        return ans;
    }
};