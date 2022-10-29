class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
        int n = nums.size() - 1;
        
        int size = floor(log2(n)) + 1;
        vector<int> bit_count(size);
        
        
        for (int i=1; i<=n; i++) {
            
            int num_size = floor(log2(i)) + 1;
            
            for (int j=0; j<num_size; j++) {
                if (1<<j & i) bit_count[j]--;
            }
        }
        
        for (auto num: nums) {
            
            int num_size = floor(log2(num)) + 1;
            
            for (int j=0; j<num_size; j++) {
                if (1<<j & num) bit_count[j]++;
            }
        }
        
        
        int ans = 0;
        for (int i=0; i<size; i++) {
            if (bit_count[i] > 0) ans |= 1<<i;
        }
        
        return ans;
    }
};