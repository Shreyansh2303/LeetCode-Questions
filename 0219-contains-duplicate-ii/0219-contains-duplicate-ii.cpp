class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        
        unordered_map<int,int> idxMap;
        
        int n = nums.size();
        for (int i=0; i<n; i++) {
            
            if (idxMap.find(nums[i]) != idxMap.end() and  i-idxMap[nums[i]] <= k) return true;
            idxMap[nums[i]] = i;
        }
        
        return false;
    }
};