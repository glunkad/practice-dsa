class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        int sz = nums.size();
        
        sort(begin(nums),end(nums));
        
        int a = nums[0];
        int b = nums[1];
        int c = nums[sz-1];
        int d = nums[sz-2];
        
        return c*d-a*b;
    }
};