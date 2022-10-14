class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
        sort(intervals.begin(), intervals.end(), [](vector<int> a, vector<int> b) {
            return a[0] < b[0];
        });
        
        int n = intervals.size();
        vector<vector<int>> finalAns;
        
        int i=0;
        while (i<n) {
            
            int cur_end = intervals[i][1];
            
            int j=i+1;
            while (j<n and intervals[j][0] <= cur_end) {
                cur_end = max(cur_end, intervals[j][1]);
                j++;
            }
            
            finalAns.push_back({intervals[i][0], cur_end});
            
            i=j;
        }
        
        return finalAns;
    }
};