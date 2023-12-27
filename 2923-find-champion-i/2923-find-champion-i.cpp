class Solution {
public:
    int findChampion(vector<vector<int>>& grid) {
        int strength = 0;
        int team = 0;
        
        for(int i = 0; i < grid.size() ; i++){
            int count = 0;
            for(int j = 0; j < grid[0].size(); j++){
                if(grid[i][j] == 1){
                    count += 1;
                }
            }
            if(strength < count){
                strength = count;
                team = i;
            }
        }
        
        return team;
    }
};