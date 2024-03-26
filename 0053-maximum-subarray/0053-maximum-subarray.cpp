class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        // Bruteforce O(N^2)
        // int max_sum = INT_MIN;
        // int sz = nums.size();
        // int sum;
        // for(int i = 0; i < sz; i++){
        //     // sum += nums[i];
        //     sum = 0;
        //     for(int j = i; j < sz; j++){
        //         sum += nums[j];
        //         max_sum = max(sum, max_sum);
        //     }
        // }
        // return max_sum;
        
        // Kadane's Algorithm O(N)
        int max_sum = nums[0];
        int current_sum = max_sum;
        
        for(int i = 1; i < nums.size(); i++){
            current_sum = max(current_sum+nums[i], nums[i]);
            max_sum = max(max_sum, current_sum);
        }
        
        return max_sum;
        
    }
};