class Solution {
public:
    void dfs(vector<vector<char>>& v,int r, int c){
        if(r < 0 || r == v.size() || c < 0 || c == v[0].size()){
            return;
        }
        if(v[r][c] != 'O'){
            return;
        }
        v[r][c] = 'T';
        dfs(v,r+1,c);
        dfs(v,r-1,c);
        dfs(v,r,c+1);
        dfs(v,r,c-1);
    }
    void solve(vector<vector<char>>& board) {
        int m = board.size();
        if(m == 0){
            return ;
        }
        int n = board[0].size();
        for(int r = 0; r < m; r++){
            for(int c = 0; c < n; c++){
                if(board[r][c] == 'O' && (r == 0 || r == m-1 || c == 0 || c == n-1)){
                    dfs(board,r,c);
                }
            }
        }
        for(int r = 0; r < m; r++){
            for(int c = 0; c < n; c++){
                if(board[r][c] == 'O' ){
                    board[r][c] = 'X';
                }
                if(board[r][c] == 'T' ){
                    board[r][c] = 'O';
                }
            }
        }
        
    }
};