class Solution {
public:
    void rotate(vector<int>& nums, int k) {
//         O(N) space
//         int sz = nums.size();
//         vector<int> v(sz);
        
//         for(int i = 0; i < k; i++){
//             v[i] = nums[sz - k + i];
//         }
        
//         for(int i = 0; i < sz - k; i++){
//             v[i+k] = nums[i];
//         }
//         nums = v;
        int sz = nums.size();
        
        k = k % sz;
        
        reverse(begin(nums),end(nums));
        reverse(begin(nums), begin(nums)+k);
        reverse(begin(nums)+k,end(nums));
        
    }
};