class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        queue<pair<int, int>> q;
        int time = 0, fresh = 0;

        int ROWS = grid.size(), COLS = grid[0].size();
        for (int r = 0; r < ROWS; r++) {
            for (int c = 0; c < COLS; c++) {
                if (grid[r][c] == 1) {
                    fresh++;
                }
                if (grid[r][c] == 2) {
                    q.push({r, c});
                }
            }
        }

        vector<vector<int>> directions = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};

        while (!q.empty() && fresh > 0) {
            int qSize = q.size();
            for (int i = 0; i < qSize; i++) {
                int r = q.front().first;
                int c = q.front().second;
                q.pop();
                for (vector<int>& direction : directions) {
                    int row = direction[0] + r;
                    int col = direction[1] + c;
                    if (row < 0 || row >= ROWS || col < 0 || col >= COLS || grid[row][col] != 1) {
                        continue;
                    }
                    grid[row][col] = 2;
                    q.push({row, col});
                    fresh -= 1;
                }
            }
            time += 1;
        }
        return fresh == 0 ? time : -1;
    }
};
