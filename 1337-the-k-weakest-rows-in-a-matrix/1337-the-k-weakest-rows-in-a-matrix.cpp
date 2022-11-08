class Solution {
    
    struct customCompare {
        bool operator()(pair<int,int> a, pair<int,int> b) {
            return a.second < b.second or (a.second == b.second and a.first < b.first);
        }
    };
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        
        vector<int> scores(mat.size());
        for (int i=0; i<mat.size(); i++) {
            scores[i] = accumulate(mat[i].begin(), mat[i].end(), 0);
        }
        
        priority_queue<pair<int,int>, vector<pair<int,int>>, customCompare> q;
        
        for (int i=0; i<scores.size(); i++) {
            q.push({i, scores[i]});
            if (q.size() > k) q.pop();
        }
        
        
        
        vector<int> finalAns(k);
        for (int i=0; i<k; i++) {
            finalAns[i] = q.top().first;
            q.pop();
        }
        
        reverse(finalAns.begin(), finalAns.end());
        
        return finalAns;
    }
};