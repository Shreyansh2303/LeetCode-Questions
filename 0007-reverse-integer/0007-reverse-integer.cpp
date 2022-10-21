class Solution {
    void reverses(string& s) {
        int i=0, j=s.size()-1;
        
        while (i<j) {
            swap(s[i], s[j]);
            i++;
            j--;
        }
    }
    
    
public:
    int reverse(int x) {
        
        bool isNeg = x<0;
        x = abs(x);
        
        string xs = to_string(x);
        reverses(xs);
        
        int n = xs.size();
        if (n>=10) {
            
            string maxs = "2147483647";
            if (isNeg) maxs[9] = '8';
            
            if (n>10 or xs > maxs) return 0;
        }
        
        int ans = 0;
        
        for (auto ch: xs) {
            ans *= 10;
            ans += ch - '0';
        }
        
        return isNeg? -1*ans: ans;
    }
};