class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int tmp = 0;
        vector<int> v;
        
        for(int& num  : nums){
            tmp += num;
            v.push_back(tmp);
        }
        
        return v;
    }
};