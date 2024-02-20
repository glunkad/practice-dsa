class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sz = size(nums);
        vector<int> mp(sz+1,0);
        
        for(int& x : nums){
            mp[x]++;
        }
        
        
        int ans = 0;
        
        for(int i = 0; i < sz+1; i++){
            if(mp[i] == 0) ans = i;
        }
        
        return ans;
    }
};