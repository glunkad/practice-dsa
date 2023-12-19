class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sz = mat.size();
        int sum =  0;
        for(int row = 0; row < sz; row++){
            for(int col = 0; col < sz; col++){
                if(row == col || row == sz - col - 1 ){
                    sum += mat[row][col];
                }
            }
        }
        return sum;
    }
};