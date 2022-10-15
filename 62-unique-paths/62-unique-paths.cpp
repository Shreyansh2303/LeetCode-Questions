class Solution {
public:
    int uniquePaths(int m, int n) {
        
        if (m==1 or n==1) return 1;
        
        m--;
        n--;
        
        int a = max(m,n);
        int b = min(m,n);
        
        long long ans = 1;
        for (int i=m+n, j=1; j<=b; j++, i--) {
            
            ans *= i;
            ans /= j;
        }
        
        return (int)ans;
    }
};