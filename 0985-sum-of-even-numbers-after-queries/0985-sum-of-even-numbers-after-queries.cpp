class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& q) {
        int sz = size(q);
        vector<int> v(sz);
        
        for(int i = 0; i < sz; i++){
            
            int val =  q[i][0], index = q[i][1];
            nums[index] += val;
            
            int sum = 0;
            
            for(int& x : nums){
                if(x % 2 == 0) sum += x;
            }
            v[i] = sum;
        }
        
        return v;
    }
};