class Solution {
public:
    bool dfs(vector<vector<char>>& grid,vector<vector<bool>>& visit,string word, int r, int c, int i){
        
        if(i == word.size()){
            return true;
        }
        
        if(r < 0 || r >= grid.size() || c < 0 || c >= grid[0].size()){
            return false;
        }
        
        if(word[i] != grid[r][c] || visit[r][c]){
            return false;
        }
        
        visit[r][c] = true;
        bool res = (
            dfs(grid,visit,word,r+1,c,i+1) || 
            dfs(grid,visit,word,r-1,c,i+1) || 
            dfs(grid,visit,word,r,c+1,i+1) || 
            dfs(grid,visit,word,r,c-1,i+1)  
        );
        visit[r][c] = false;
        return res;
    }
    bool exist(vector<vector<char>>& board, string word) {
        int ROWS = board.size();
        int COLS = board[0].size();
        vector<vector<bool>> path(ROWS, vector<bool>(COLS,false));
        
        for(int r = 0 ; r < ROWS; r++){
            for(int c = 0; c < COLS; c++){
                if(dfs(board,path,word,r,c,0)){
                    return true;
                }
            }
        }
        return false;
    }
};