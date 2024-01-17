class Solution {
public:
    int maxProduct(vector<int>& nums) {
        sort(begin(nums),end(nums));
        
        int sz = nums.size(); 
        
        return (nums[sz-1]-1)*(nums[sz-2]-1);
    }
};