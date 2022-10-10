class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
        unordered_set<int> s;
        
        for (auto el:nums) {
            
            if (s.find(el) != s.end()) {
                return true;
            }
            s.insert(el);
        }
        
        return false;
    }
};