class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& nums) {
        vector<bool> v;
        int num = 0;
        
        for(int i = 0; i < size(nums); i++){
            num = (2*num + nums[i]) % 5;
            v.push_back(num == 0);
        }
        
        return v;
    }
};