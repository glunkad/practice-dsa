class Solution {
public:
    int subarraySum(vector<int>& arr, int k) {
        int count = 0;
        int sz = arr.size();
        
        for(int i = 0; i < sz; i++){
            int sum = 0;
            for(int j = i; j < sz; j++){
                sum += arr[j];
                if(sum == k){
                    count++;
                }
            }
        }
        return count;
    }
};