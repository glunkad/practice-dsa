class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> v;
        
        for(int& num : nums){
            v.push_back(pow(num,2));
        }
        
        sort(begin(v),end(v));
        return v;
    }
};