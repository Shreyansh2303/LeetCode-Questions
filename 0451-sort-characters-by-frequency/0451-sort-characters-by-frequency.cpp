class Solution {
public:
    string frequencySort(string s) {
        
        unordered_map<char,int> freq;
        
        for (auto ch: s) {
            freq[ch]++;
        }
        
        
        vector<pair<char,int>> v(freq.begin(), freq.end());
        
        sort(v.begin(), v.end(), [](pair<char,int> a, pair<char,int> b) {
            return a.second > b.second;
        });
        
        for (int i=0; i<v.size(); i++) {
            cout << v[i].first << ' ' << v[i].second << endl;
        }
        
        
        string ans;
        for (auto [ch, n]: v) {
            while (n--) {
                ans.push_back(ch);
            }
        }
        
        
        return ans;
    }
};