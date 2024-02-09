class Solution {
public:
    int hardestWorker(int n, vector<vector<int>>& logs) {
        int max_work = logs[0][1];
        int id = logs[0][0];
        
        for(int i = 1; i < size(logs) ; i++){
            int curr = logs[i][1]-logs[i-1][1];
            
            if(max_work < curr){
                max_work = curr;
                id = logs[i][0];
            }
            else if(max_work == curr){
                id = min(logs[i][0],id);
            }
            
        }
        
        return id;
    }
};