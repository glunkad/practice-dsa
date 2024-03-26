class Solution {
public:
    int x = -9999;
    void setRow(vector<vector<int>> &v, int r){
        for(int i = 0; i < v[0].size(); i++){
            if(v[r][i] != 0){
                v[r][i] = x;       
            }
        }
    }
    void setCol(vector<vector<int>> &v, int c){
        for(int i = 0; i < v.size(); i++){
            if(v[i][c] != 0) {
                v[i][c] = x;
            }
        }
    }
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        
        vector<int> rows(n,0), cols(m,0);
        
        for(int row = 0; row < n; row++){ // row 
            for(int col = 0; col < m; col++){ // col
                if(matrix[row][col] == 0){
                    rows[row] = 1;
                    cols[col] = 1;
                }
            }
        }
        
        for(int row = 0; row < n; row++){
            for(int col = 0; col < m; col++){
                if(rows[row] == 1 || cols[col] == 1){
                    matrix[row][col] = 0;
                }
            }
        }
    }
};