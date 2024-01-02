class Solution {
public:
    int getNumLen(int x){
        if(x < 0){
            return floor(log10((-1)*x))+2;
        }
        else if(x == 0){
            return 1;
        }
        return floor(log10(x))+1;
    }
    vector<int> findColumnWidth(vector<vector<int>>& grid) {
        
        vector<int> v;
        
        for(int i = 0; i < grid[0].size(); i++){
            int max = 0;
            for(int j = 0; j < grid.size(); j++){
                int len = getNumLen(grid[j][i]);
                if(max < len){
                    max = len;
                }
            }
            v.push_back(max);
        }
        
        return v;
    }
};