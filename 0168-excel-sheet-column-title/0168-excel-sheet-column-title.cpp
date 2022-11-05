class Solution {
public:
    string convertToTitle(int columnNumber) {
        
        string ans;
        
        if (columnNumber <= 0) return ans;
        
        columnNumber--;
        ans += convertToTitle(columnNumber/26);
        
        ans.push_back('A'+columnNumber%26);
        
        
        return ans;
    }
};