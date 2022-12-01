class Solution {
    
    private boolean isVowel(char c) {
        
        if (c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='A' || c=='E' || c=='I' || c=='O' || c=='U') {
            return true;
        }
        
        
        return false;
    }
    
    public boolean halvesAreAlike(String s) {
        
        int v1 = 0, v2 = 0;
        
        int i=0;
        for (; i<s.length()/2; i++) {
            if (isVowel(s.charAt(i))) v1++;
        }
        for (; i<s.length(); i++) {
            if (isVowel(s.charAt(i))) v2++;
        }
        
        if (v1 == v2) return true;
        else return false;
    }
}