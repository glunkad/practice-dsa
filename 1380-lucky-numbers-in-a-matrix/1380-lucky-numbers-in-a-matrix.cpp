class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& mat) {
        int row = mat.size();
        int col = mat[0].size();
        
        vector<int> minRow(row, INT_MAX);
        vector<int> maxCol(col, INT_MIN);
        
        for(int i = 0; i < row; i++){
            for(int j = 0; j < col; j++){
                minRow[i] = min(minRow[i], mat[i][j]);
                maxCol[j] = max(maxCol[j], mat[i][j]);
            }
        }
        
        vector<int> v;
        
        for(int i = 0; i < row; i++){
            for(int j = 0; j < col; j++){
                if(minRow[i] == maxCol[j]){
                    v.push_back(mat[i][j]);
                }
            }
        }
        return v;
    }
};