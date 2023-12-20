class Solution {
public:
    int isOdd(int& n){
        return n&1;
    }

    int oddCells(int m, int n, vector<vector<int>>& indices) {
        int sz = indices.size();
        int count = 0;
    
        vector<vector<int>> mat(m,vector<int>(n,0));
        
        int row = 0;
        int col = 0;
        for(int i = 0; i < sz; i++){
            row = indices[i][0];
            col = indices[i][1];
            // add 1 to all the row elements
            for(int i = 0; i < mat[0].size(); i++){
                mat[row][i] += 1;
            }

            // add 1 to all the col elements
            for(int i = 0; i < mat.size(); i++){
                mat[i][col] += 1;
            }
        }
        
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(isOdd(mat[i][j])){
                    count += 1;
                }
            }
        }
        
        return count;
    }
};