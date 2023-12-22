class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        sort(begin(nums), end(nums));
        
        int min = nums[0];
        int max = nums[nums.size() - 1];
        
        for(int& num : nums){
            if(min < num && num < max){
                return num;
            }
        }
        return -1;
    }
};