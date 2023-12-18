class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        int sz = nums.size(); 
        vector<int> v;
        for(int i = 0; i < sz; ){
            int freq = nums[i];
            int val = nums[i+1];
            for(int j = 0; j < freq; j++){
                v.push_back(val); 
            }
            i+=2;
        }
        return v;
    }
};