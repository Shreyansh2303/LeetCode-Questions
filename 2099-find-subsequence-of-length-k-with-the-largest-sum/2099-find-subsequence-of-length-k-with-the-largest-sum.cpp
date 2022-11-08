class Solution {
    
    struct customCompare {
        bool operator()(pair<int,int> p1, pair<int,int> p2) {
            return p1.second > p2.second;
        }
    };
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        
        priority_queue<pair<int,int>, vector<pair<int,int>>, customCompare> q;
        
        for (int i=0; i<nums.size(); i++) {
            
            q.push({i,nums[i]});
            if (q.size() > k) q.pop();
        }
        
        vector<pair<int,int>> tempAns;
        
        while (!q.empty()) {
            tempAns.push_back(q.top());
            q.pop();
        }
        
        sort(tempAns.begin(), tempAns.end());
        
        vector<int> finalAns;
        for (auto& [idx, num]: tempAns) {
            finalAns.push_back(num);
        }
        
        
        return finalAns;
    }
};