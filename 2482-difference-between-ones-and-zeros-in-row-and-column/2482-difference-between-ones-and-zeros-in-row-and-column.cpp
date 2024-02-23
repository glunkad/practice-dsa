class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        int m = size(grid);
        int n = size(grid[0]);
        
        vector<int> oneRows(m);
        vector<int> oneCols(n);
        
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                oneRows[i] += grid[i][j];
                oneCols[j] += grid[i][j];
            }
        }
        
        vector<vector<int>> v(m, vector<int> (n,0));
        
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                v[i][j] = 2*oneRows[i] + 2*oneCols[j] -m - n;
            }
        }
        
        return v;
    }
};