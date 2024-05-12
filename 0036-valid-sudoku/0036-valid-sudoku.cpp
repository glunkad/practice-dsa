class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<string> seen;
        for (int i = 0; i < 9; ++i) {
            for (int j = 0; j < 9; ++j) {
                char number = board[i][j];
                if (number != '.') {
                    if (!seen.insert(number + string(" in row ") + to_string(i)).second ||
                        !seen.insert(number + string(" in column ") + to_string(j)).second ||
                        !seen.insert(number + string(" in block ") + to_string(i / 3) + "-" + to_string(j / 3)).second)
                        return false;
                }
            }
        }
        return true;
    }
};