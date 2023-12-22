class Solution {
public:
    vector<int> findPeaks(vector<int>& arr) {
        vector<int> v;
        for(int i = 1; i < arr.size() - 1; i++){
            if(arr[i-1] < arr[i] && arr[i+1] < arr[i]){
                v.push_back(i);
            }
        }
        return v;
    }
};