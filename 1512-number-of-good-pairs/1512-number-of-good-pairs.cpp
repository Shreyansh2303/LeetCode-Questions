class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        
        int n = nums.size();
        
        unordered_map<int,int> freq_mp;
        
        for (int i=0; i<n; i++) {
            freq_mp[nums[i]]++;
        }
        
        int ans = 0;
        for (auto& [num, freq]: freq_mp) {
            ans += freq*(freq-1)/2;
        }
        
        return ans;
    }
};