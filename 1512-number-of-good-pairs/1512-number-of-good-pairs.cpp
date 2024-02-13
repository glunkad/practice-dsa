class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        // int sz = size(nums);
        int count = 0;
        
        // for(int i = 0; i < sz ; i++){
        //     for(int j = i+1; j < sz; j++){
        //         if(nums[i] == nums[j]){
        //             count++;
        //         }
        //     }
        // }
        
        unordered_map<int,int> mp;
        for(int& x : nums){
            count+=mp[x];
            mp[x]++;
        }
        
        return count;
    }
};