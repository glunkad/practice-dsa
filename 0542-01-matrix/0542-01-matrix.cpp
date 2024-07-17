class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        queue<pair<int,int>> q;
        int ROWS = mat.size(), COLS = mat[0].size();
        
        vector<vector<int>> v(ROWS, vector<int>(COLS, -1));
        for (int r = 0; r < ROWS; r++) {
            for (int c = 0; c < COLS; c++) {
                if (mat[r][c] == 0) {
                    q.push({r, c});
                    v[r][c] = 0;
                }
            }
        }
        
        vector<vector<int>> directions = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
        while (!q.empty()) {
            int r = q.front().first;
            int c = q.front().second;
            q.pop();
            
            for (const auto& direction : directions) {
                int row = r + direction[0];
                int col = c + direction[1];
                if (row < 0 || row >= ROWS || col < 0 || col >= COLS || v[row][col] != -1) {
                    continue;
                }
                v[row][col] = v[r][c] + 1;
                q.push({row, col});
            }
        }
        return v;
    }
};
