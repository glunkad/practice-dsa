class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        int count = 0;
        int sz = size(nums);
        
        sort(begin(nums),end(nums));
        
        // for(int i = 0; i < sz; i++){
        //     for(int j = i + 1; j < sz; j++){
        //         if(nums[i]+nums[j] < target){
        //             count++;
        //         }
        //     }
        // }
        
        int left = 0;
        int right = sz-1;
        
        for(;left < right;){
            if(nums[left]+nums[right] < target){
                count += right - left;
                left++;
            }
            else{
                right--;
            }
        }
        
        
        return count;
    }
};