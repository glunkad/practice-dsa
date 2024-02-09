class Solution {
public:
    bool isGood(vector<int>& nums) {
        unordered_map<int,int> mp;
        int n = size(nums);
        
        for(int& x : nums) mp[x]++;
        
        for(int i = 1; i < n; i++){
            if(mp[i] <= 0 || mp[n-1] != 2){
                return false;
            }
        }
        if(n == 1){
            return false;
        }
        return true;
        
    }
};