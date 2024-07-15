class Solution {
public:
    void dfs(vector<vector<int>>& grid, int r, int c,set<pair<int,int>>& visit, int prevHeight){
        int ROWS = grid.size();
        int COLS = grid[0].size();
        
        if(r < 0 || r >= ROWS || c < 0|| c >= COLS ){
            return ;
        }
        
        if(visit.find({r,c}) != visit.end() || grid[r][c] < prevHeight){
            return;
        }
        
        visit.insert({r,c});
        dfs(grid,r+1,c,visit,grid[r][c]);
        dfs(grid,r-1,c,visit,grid[r][c]);
        dfs(grid,r,c+1,visit,grid[r][c]);
        dfs(grid,r,c-1,visit,grid[r][c]);
        
    }
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        int ROWS = heights.size();
        int COLS = heights[0].size();
        set<pair<int,int>> pacific, atlantic;
    
        for(int c = 0; c < COLS; c++){
            dfs(heights,0,c,pacific,heights[0][c]);
            dfs(heights,ROWS-1,c,atlantic,heights[ROWS-1][c]);
        }
        
        for(int r = 0; r < ROWS; r++){
            dfs(heights,r,0,pacific,heights[r][0]);
            dfs(heights,r,COLS-1,atlantic,heights[r][COLS-1]);
        }
        
        vector<vector<int>> res;
        for(int r = 0; r < ROWS; r++){
            for(int c = 0; c < COLS; c++){
                if(
                    (pacific.find({r,c})!= pacific.end()) &&  
                    (atlantic.find({r,c}) != atlantic.end())
                ){
                    res.push_back({r,c});
                }
            }
        }
        return res;
    }
};