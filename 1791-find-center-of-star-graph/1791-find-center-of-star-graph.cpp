class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        
        vector<int>& edge1 = edges[0], edge2 = edges[1];
        
        int pos1 = edge1[0], pos2 = edge1[1];
        
        if (edge2[0] == pos1 or edge2[1] == pos1) {
            return pos1;
        }
        else {
            return pos2;
        }
    }
};