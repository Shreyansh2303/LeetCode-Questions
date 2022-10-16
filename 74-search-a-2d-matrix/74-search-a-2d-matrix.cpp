class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int top = 0;
        int down = matrix.size()-1;
        
        if (matrix[down][0] < target) top = down;
        
        while (top < down) {
            
            int mid = top + (down-top)/2;
            
            if (top == mid) {
                if (target < matrix[down][0]) down = top;
                else top = down;
            }
            else {
                if (matrix[mid][0] == target) top = down = mid;
                else if (matrix[mid][0] < target) top = mid;
                else if (target < matrix[mid][0]) down = mid-1;
            }
        }
        
        
        
        auto itr = lower_bound(matrix[top].begin(), matrix[top].end(), target);
        if (itr == matrix[top].end()) return false;
        if (*itr == target) return true;
        return false;
        
    }
};