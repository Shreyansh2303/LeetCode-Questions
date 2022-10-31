class Solution {
    
    bool checkDiagonal(vector<vector<int>>& matrix, int i, int j) {
        
        int el = matrix[i][j];
        
        while (i<matrix.size() and j<matrix[0].size()) {

            if (matrix[i][j] != el) return false;
            i++;
            j++;
        }
        
        return true;
    }
    
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        
        int i=0, j=0;
        
        for (; j<matrix[0].size(); j++) {
            if (!checkDiagonal(matrix,i,j)) return false;
        }
        
        j=0;
        
        for (; i<matrix.size(); i++) {
            if (!checkDiagonal(matrix,i,j)) return false;
        }
        
        return true;
    }
};