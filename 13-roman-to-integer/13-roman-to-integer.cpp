class Solution {
public:
    int romanToInt(string s) {
        
        unordered_map<char, int> num = {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
        };
        
        int ans = 0;
        
        int n = s.size();
        
        for (int i=0; i<n-1; i++) {
            if (num[s[i]] >= num[s[i+1]]) ans += num[s[i]];
            else ans -= num[s[i]];
            
            cout << ans << endl;
        }
        
        ans += num[s[n-1]];
        
        return ans;
    }
};