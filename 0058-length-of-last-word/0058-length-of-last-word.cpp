class Solution {
public:
    int lengthOfLastWord(string s) {
        
        int n = s.size()-1;
        
        while (n>=0 and s[n] == ' ') n--;
        
        int count = 0;
        while (n>=0 and s[n] != ' ') {
            n--;
            count++;
        }
        
        return count;
    }
};