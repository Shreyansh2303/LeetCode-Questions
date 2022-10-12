class KthLargest {
    
    int k;
    vector<int> v;
public:
    KthLargest(int a, vector<int>& nums) {
        k = a;
        v.assign(nums.begin(), nums.end());
        sort(v.begin(), v.end());
    }
    
    int add(int val) {
        v.push_back(val);
        int n = v.size();
        
        for (int i=n-2; i>=0 and v[i]>val; i--) {
            swap(v[i], v[i+1]);
        }
        
        return v[n-k];
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */