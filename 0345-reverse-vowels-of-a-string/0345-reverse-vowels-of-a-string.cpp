class Solution {
public:
    string reverseVowels(string s) {
        
        vector<int> v;
        string vowels;
        
        for (int i=0; i<s.size(); i++) {
            
            char ch = tolower(s[i]);
            if (ch=='a' or ch=='e' or ch=='i' or ch=='o' or ch=='u') {
                
                v.push_back(i);
                vowels.push_back(s[i]);
            }
        }
        
        reverse(vowels.begin(), vowels.end());
        
        for (int i=0; i<v.size(); i++) {
            
            s[v[i]] = vowels[i];
        }
        
        return s;
    }
};