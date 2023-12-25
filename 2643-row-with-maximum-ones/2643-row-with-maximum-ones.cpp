class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int max_count = 0;
        int index;
        int sz = mat.size();
        
        for(int i = 0; i < sz; i++){
            int count = 0;
            for(int j = 0 ; j < mat[0].size() ; j++){
                if(mat[i][j] == 1){
                    count+=1;
                }
            }
            if(max_count < count){
                max_count = count;
                index = i;
            }
        }
        
        vector<int> v;
        v.push_back(index);
        v.push_back(max_count);
        return v;
    }
};