class Solution {

    struct compare {
        bool operator()(int a, int b) {
            return a > b;
        }
    };    
    
public:
    int maxProduct(vector<int>& nums) {
        
        priority_queue<int, vector<int>, compare> pq;
        
        for (auto num: nums) {
            pq.push(num);
            if (pq.size() > 2) pq.pop();
        }
        
        int ans = 1;
        while (!pq.empty()) {
            ans *= pq.top()-1;
            pq.pop();
        }
        
        return ans;
    }
};