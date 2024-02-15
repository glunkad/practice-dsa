class Solution {
public:
    bool check(vector<int>& nums) {
        int sz = size(nums);
        int count = 0;
        
        for(int i = 1; i < sz; i++){
            if(nums[i] < nums[i-1]){
                count++;
            }
        }
        
        if(nums[0] < nums[sz - 1]) count++;
        
        return count <= 1;
    }
};