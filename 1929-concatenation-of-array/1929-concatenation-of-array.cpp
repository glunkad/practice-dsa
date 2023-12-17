class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int sz = nums.size();
        vector<int> v(2*sz);
        for(int i = 0; i < 2*sz; i++){
            v[i] = nums[i % sz];
        }
        return v;
    }
};