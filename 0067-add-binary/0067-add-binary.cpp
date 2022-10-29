class Solution {
public:
    string addBinary(string a, string b) {
        
        int n = a.size()-1, m = b.size()-1;
        
        if (m>n) {
            swap(a,b);
            swap(m,n);
        }
        
        int carry = 0;
        string ans;

        while (m>=0) {
            
            int x = a[n] - '0';
            int y = b[m] - '0';
            
            int res = x+y+carry;
            
            ans += to_string(res%2);
            carry = res/2;
            
            n--;
            m--;
        }
        
        while (n>=0) {
            
            int x = a[n] - '0';
            
            int res = x+carry;
            
            ans += to_string(res%2);
            carry = res/2;
            
            n--;
        }
        
        if (carry) ans.push_back('1');
        
        reverse(ans.begin(), ans.end());
        
        return ans;
    }
};