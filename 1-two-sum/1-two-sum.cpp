class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        int n = nums.size();
        
        vector<pair<int,int>> v(n);
        for (int i=0; i<n; i++) {
            v[i] = {nums[i], i};
        }
        
        sort(v.begin(), v.end());
        
        for (int i=0; i<n; i++) {
            cout << v[i].first << ' ' << v[i].second;
        }
        
        int low = 0;
        int high = n-1;
        
        while (low < high) {
            
            if (v[low].first + v[high].first == target) {
                return {v[low].second, v[high].second};
            }
            else if (v[low].first + v[high].first < target) {
                low++;
            }
            else {
                high--;
            }
        }
        
        
        return {1,0};
    }
};