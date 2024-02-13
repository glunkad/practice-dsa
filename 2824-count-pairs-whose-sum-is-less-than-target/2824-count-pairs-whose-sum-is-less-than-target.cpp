class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        int count = 0;
        int sz = size(nums);
        
        for(int i = 0; i < sz; i++){
            for(int j = i + 1; j < sz; j++){
                if(nums[i]+nums[j] < target){
                    count++;
                }
            }
        }
        
        
        return count;
    }
};