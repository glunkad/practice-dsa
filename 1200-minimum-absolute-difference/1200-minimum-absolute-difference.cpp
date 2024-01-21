class Solution {
public:
    int getMinDiff(vector<int>& v){
        int min_d = abs(v[1] - v[0]);
        
        for(int i = 1; i < v.size() - 1; i++){
            
            int d = abs(v[i+1] - v[i]);
            
            if(min_d > d){
                min_d = d;
            }
        }
        return min_d;
    }
    
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(begin(arr),end(arr));
        
        int min_d = getMinDiff(arr);
        vector<vector<int>> v;
        
        for(int i = 0; i < arr.size() - 1; i++){
            if(min_d == abs(arr[i+1] - arr[i])){
                v.push_back({arr[i],arr[i+1]});
            }
        }
        
        return v;
    }
};