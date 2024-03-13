class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        map<vector<int>, int> mp;
        int n = grid.size();
        
        for(vector<int>& row : grid){
            mp[row]++;
        }
        
        int count = 0;
        for(int i = 0; i < n; i++){
            vector<int> col;
            for(int j = 0; j < n; j++){
                col.push_back(grid[j][i]);
            }
            count += mp[col];
        }
        
        return count;
    }
};