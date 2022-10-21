class Solution {
    
    struct compare {
        bool operator()(pair<string,int> a, pair<string,int> b) {
            return a.second > b.second or (a.second == b.second and a.first < b.first);
        }
    };

public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        
        unordered_map<string,int> count;
        for (auto word: words) {
            count[word]++;
        }
        
        priority_queue<pair<string,int>, vector<pair<string,int>>, compare> pq;
        
        for (auto el: count) {
            pq.push(el);
            if (pq.size() > k) pq.pop();
        }
        
        
        
        vector<string> ans;
        
        while (!pq.empty()) {
            ans.push_back(pq.top().first);
            pq.pop();
        }
        
        reverse(ans.begin(), ans.end());
        
        return ans;
    }
};