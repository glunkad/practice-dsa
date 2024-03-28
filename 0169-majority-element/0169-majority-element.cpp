class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> mp;
        int n = nums.size() / 2;
        
        for(int& num : nums){
            if(mp[num] == n){
                return num;
            }
            mp[num]++;
        }
        return -1;
    }
};