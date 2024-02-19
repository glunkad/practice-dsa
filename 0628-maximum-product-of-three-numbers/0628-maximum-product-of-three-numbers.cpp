class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(begin(nums),end(nums));
        
        int sz = size(nums);
        int p1 = nums[0]*nums[1]*nums[sz-1];
        int p2 = nums[sz-1]*nums[sz-2]*nums[sz-3];
        
        return max(p1,p2);
    }
};