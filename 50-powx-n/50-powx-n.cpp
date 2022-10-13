class Solution {
    
    double fastPow(double x, int n) {
        
        if (n==0) return 1;
        if (n%2 == 0) {
            double temp = fastPow(x,n/2);
            return temp*temp;
        }
        else {
            double temp = fastPow(x,n/2);
            return x*temp*temp;
        }
        
        
    }
    
public:
    double myPow(double x, int n) {
        
        if (n==0) return 1;
        
        bool isNeg = n<0;
        n = abs(n);
        
        double ans = fastPow(x,n);
        
        return isNeg? 1/ans: ans;
    }
};