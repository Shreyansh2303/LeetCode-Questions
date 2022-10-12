class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        
        sort(nums.begin(), nums.end());
        
        int n = nums.size();
        
        int maxPer = 0;
        for (int i=n-1; i>=2; i--) {
            if (nums[i-2]+nums[i-1] > nums[i]) {
                maxPer = max(maxPer, nums[i-2]+nums[i-1]+nums[i]);
            }
        }
        
        return maxPer;
    }
};