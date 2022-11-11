class Solution {
public:
    bool isCovered(vector<vector<int>>& ranges, int left, int right) {
        
        if (left > right) return true;
        
        bool rightExists = false;
        for (auto& range: ranges) {
            
            if (range[0] <= right and right <= range[1]) {
                rightExists = true;
                break;
            }
        }
        
        
        return rightExists and isCovered(ranges, left, right-1);
    }
};