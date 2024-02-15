class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        // first find max then check if max < 2 * num 
        int max  = 0;
        int ind = 0;
        
        for(int i = 0; i < size(nums); i++){
            if(max < nums[i]){
                max = nums[i];
                ind = i;
            }
        }
        
        for(int x : nums){
            if(2*x > max && x != max){
                return -1;
            }
        }
        return ind;
        
    }
};