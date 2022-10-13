class Solution {
public:
    string countAndSay(int n) {
        
        string s = "1";
        
        for (int k=0; k<n-1; k++) {
            
            string temp = "";
            
            int i=0, j=0;
            
            while (i<s.size()) {
                
                while (j<s.size() and s[j] == s[i]) {
                    j++;
                }
                
                temp += to_string(j-i) + s[i];
                i=j;
            }
            
            s = temp;
        }
        
        return s;
        
    }
};