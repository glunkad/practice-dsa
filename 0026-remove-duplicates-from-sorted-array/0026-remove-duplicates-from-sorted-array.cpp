class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int sz = nums.size();
        int j = 1;
        
        for(int i = 1; i < sz; i++){
            if(nums[i-1] != nums[i]){
                nums[j] = nums[i];
                j++;
            }
        }
        
        return j;
    }
};