class Solution {
public:
    int compress(vector<char>& chars) {
        
        vector<char> finalAns;
        int n = chars.size();
        
        int i=0;
        while (i<n) {
            
            int j = i+1;
            while (j<n and chars[i] == chars[j]) {
                j++;
            }
            
            finalAns.push_back(chars[i]);
            if (j>i+1) {
                string len = to_string(j-i);
                
                for (auto ch: len) {
                    finalAns.push_back(ch);
                }
            }
            
            
            i = j;
        }
        
        chars = finalAns;
        return (int)finalAns.size();
    }
};