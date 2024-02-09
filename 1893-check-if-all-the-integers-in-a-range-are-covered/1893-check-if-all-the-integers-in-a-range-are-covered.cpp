class Solution {
public:
    bool isCovered(vector<vector<int>>& ranges, int left, int right) {
        for(int t = left; t <= right; t++){
            bool present = false; // to check if int is present 
            for(int i = 0 ; i < size(ranges) && !present; i++){
                int s = ranges[i][0], e = ranges[i][1];
                
                if(s <= t && t <=  e){ // once it is present we set the present flag
                    present = true;
                }
            }
            if(!present) return false;
        }
        return true;
    }
};