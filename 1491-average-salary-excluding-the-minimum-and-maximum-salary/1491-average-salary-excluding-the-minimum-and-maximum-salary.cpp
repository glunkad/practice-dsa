class Solution {
public:
    double average(vector<int>& arr) {
        int sz = arr.size();
        sort(begin(arr),end(arr));
        
        double sum = 0;
        for(int i = 1; i < sz - 1; i++){
            sum += arr[i];
        }
        
        return sum / (sz-2);
        
    }
};