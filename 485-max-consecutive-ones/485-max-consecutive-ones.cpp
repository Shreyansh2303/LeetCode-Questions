class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        
        int tempCount = nums[0];
        int gmax = 0;
        int n = nums.size();
        
        for (int i=1; i<n; i++) {
            
            if (nums[i] == 1)  tempCount++;
            
            else {
                
                if (nums[i-1] == 1) {
                    gmax = max(gmax,tempCount);
                    tempCount = 0;
                }
            }
        }
        
        gmax = max(gmax,tempCount);
        
        
        return gmax;
    }
};