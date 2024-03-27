class Solution {
public:
    void transpose(vector<vector<int>>& v){
        int n = v.size();
        
        for(int row = 0; row < n; row++){
            for(int col = 0; col < row; col++){
                // swap algorithm
                // int tmp = v[row][col];
                // v[row][col] = v[col][row];
                // v[col][row] = tmp;
                swap(v[row][col], v[col][row]);
            } 
        }
    }
    
    void reverseMatrix(vector<vector<int>>& v){
        for(vector<int>& row : v){
            reverse(begin(row),end(row));
        }
    }
    
    void rotate(vector<vector<int>>& matrix) {
        transpose(matrix);
        reverseMatrix(matrix);
    }
};