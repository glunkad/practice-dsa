class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int sz = size(nums);
        vector<int> mp(sz+1, 0);
        
        for(int i = 0; i < sz ; i++) mp[nums[i]]++;
        
        int dup = 0;
        int missing = 0;
        
        vector<int> v;
        
        for(int i = 1; i < sz+1; i++){
            if(mp[i] == 0){
                missing = i;
            }
            if(mp[nums[i-1]] == 2){
                dup = nums[i-1];
            }
        }
        
        return {dup,missing};      
    }
};