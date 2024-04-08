class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // 2 for loop TC => O(n^2)
        // int sz = nums.size() ;
        // for(int i = 0; i < sz; i++){
        //     for(int j = i+1; j < sz; j++){
        //         if(nums[i]+nums[j] == target){
        //             return {i,j};
        //         }
        //     }
        // }
        // return {-1,-1};
        // single for loop TC => O(n)
        
        unordered_map<int,int> mp;
        int sz = nums.size();
        
        for(int i = 0; i < sz; i++){
            int n1 = nums[i];
            int n2 = target - n1;
            
            if(mp.count(n2) > 0){
                return {i, mp[n2]};
            }
            
            mp[n1] = i;
        }
        
        return {-1,-1};
    }
};