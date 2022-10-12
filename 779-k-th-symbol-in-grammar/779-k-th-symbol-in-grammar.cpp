class Solution {
    
    int next(int prev, string s)  {
        
        if ((prev == 0 and s == "left") or (prev == 1 and s == "right")) return 0;
        return 1;
    }
    
public:
    int kthGrammar(int n, int k) {
        
        int ans = 0;
        
        
        
        while (n > 1) {
            
            long long breadth = pow(2,n-1);
            
            if (k <= breadth/2) {
                ans = next(ans, "left");
            }
            else {
                ans = next(ans, "right");
                k -= breadth/2;
            }
            
            n--;
        }
        
        
        
        return ans;
    }
};