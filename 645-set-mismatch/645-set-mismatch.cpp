class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        
        int n = nums.size();
        
        long long lin_sum = 0;
        long long sqr_sum = 0;
        
        for (int i=0; i<n; i++) {
            lin_sum += nums[i] - (i+1);
            sqr_sum += nums[i]*nums[i] - (i+1)*(i+1);
        }
        
        int a = lin_sum;
        int b = sqr_sum;
        
        vector<int> ans(2);
        
        ans[0] = 0.5*((b/a)+a);
        ans[1] = 0.5*((b/a)-a);
        
        return ans;
    }
};