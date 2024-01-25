class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        int count = 0;
        int sz = nums.size() ;
        
        for(int i = 0; i < sz - 1; i++){
            for(int j = i+1; j < sz; j++){
                if(abs(nums[i] - nums[j]) == k){
                    count += 1;
                }
            }
        }
        
        return count;
    }
};