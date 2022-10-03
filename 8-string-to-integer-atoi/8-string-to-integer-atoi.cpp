class Solution {
    
    
    bool compare(string s1, string s2) {
        
        int n = s1.size(), m = s2.size();
        
        if (n<m) return true;
        if (n>m) return false;
        
        for (int i=0; i<n; i++) {
            if (s1[i] < s2[i]) return true;
            if (s1[i] > s2[i]) return false;
        }
        
        return true;
    }

    
    int convert(string s) {
        
        int n = s.size();
        int ans = 0;
        
        for (int i=0; i<n; i++) {
            
            ans *= 10;
            ans += s[i]-'0';
        }
        
        return ans;
    }
    
public:
    int myAtoi(string s) {
        
        int i=0;
        string mods = "";
        bool isPositive = true;
        
        while (s[i] == ' ') i++;
        if (s[i] == '+' or s[i] == '-') {
            if (s[i] == '-') isPositive = false;
            i++;
        }
        while (s[i] == '0') i++;
        while ('0' <= s[i]  and s[i] <= '9') mods.push_back(s[i++]);
        
        
        
        if (isPositive) {
            if (compare(mods, "2147483647") ) return convert(mods);
            else return 2147483647;
        }
        if (!isPositive) {
            if (compare(mods, "2147483647")) return -1*convert(mods);
            else return -2147483648;
        }
        
        return 0;
        
    }
};