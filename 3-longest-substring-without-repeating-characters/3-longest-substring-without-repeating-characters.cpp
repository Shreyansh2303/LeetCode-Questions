class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        int n = (int)(s.size());
        
        if (n==0 or n==1) return n;
        
        int i=0, j=0;
        
        unordered_map<char,int> freq;
        freq[s[i]] = 1;
        
        int maxLength = 1;
        
        while (j<n-1) {

            j++;
            freq[s[j]]++;
        
            while (freq[s[j]] != 1) {
                
                freq[s[i]]--;
                i++;
            }
        
            maxLength = max(maxLength, j-i+1);
            
            cout << i << ' ' << j << ' ' << maxLength << '\n';
        }
    
        return maxLength;
    }
};