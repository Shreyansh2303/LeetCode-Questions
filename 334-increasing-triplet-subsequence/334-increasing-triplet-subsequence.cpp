class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        
        int n = nums.size();
        if (n<=2) return false;
        
        vector<int> triplet = {INT_MAX,INT_MAX,INT_MAX};
        int cur_min = INT_MAX;
        
        for (int i=0; i<n; i++) {
            
            if (nums[i] > triplet[1]) {
                triplet[2] = nums[i];
                return true;
            }
            
            if (nums[i] < triplet[1] and nums[i] > cur_min) {
                triplet[0] = cur_min;
                triplet[1] = nums[i];
            }
            
            cur_min = min(cur_min, nums[i]);
        }
        
        
        return false;
    }
};