class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        
        unordered_set<int> types;
        for (auto& ch: jewels) {
            types.insert(ch);
        }
        
        int ans = 0;
        for (auto& ch: stones) {
            if (types.count(ch)) ans++;
        }
        
        return ans;
    }
};