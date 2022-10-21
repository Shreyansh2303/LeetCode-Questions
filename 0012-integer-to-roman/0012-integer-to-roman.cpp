class Solution {

    vector<string> ones = {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};
    vector<string> tens = {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"};
    vector<string> hund = {"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"};
    
public:
    
    string intToRoman(int num) {
        
        string ans;
        
        int m_cnt = num/1000;
        num %= 1000;
        while (m_cnt--) ans.push_back('M');
        
        int hund_cnt = num/100;
        num %= 100;
        ans += hund[hund_cnt];
        
        int tens_cnt = num/10;
        num %= 10;
        ans += tens[tens_cnt];
        
        ans += ones[num];
        
        
        
        return ans;
    }
};