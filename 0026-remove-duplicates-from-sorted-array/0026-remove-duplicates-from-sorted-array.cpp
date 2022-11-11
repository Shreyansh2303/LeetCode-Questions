class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        int n = nums.size();
        
        int left = 0;
        int right = 0;
        
        
        while (right < n) {
            
            if (right < n-1 and nums[right] == nums[right+1]) {
                right++;
            }
            else {
                nums[left++] = nums[right++];
            }
        }
        
        
        return left;
    }
};