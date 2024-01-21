class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(begin(arr),end(arr));
        
        int d = arr[1]-arr[0];
        
        for(int i = 1; i < arr.size() - 1; i++){
            if(d != arr[i+1] - arr[i]){
                return false;
            }
        }
        
        return true;
    }
};