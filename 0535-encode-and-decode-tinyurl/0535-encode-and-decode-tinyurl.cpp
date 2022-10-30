class Solution {
    
    int n = 0;
    string base = "http://tinyurl.com/";
        
    unordered_map<int, string> mp;
    
public:

    // Encodes a URL to a shortened URL.
    string encode(string longUrl) {
        
        mp[++n] = longUrl;
        return base + to_string(n);
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
        
        int num = stoi(shortUrl.substr(base.size(), shortUrl.size()-base.size()));
        
        return mp[num];
    }
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));