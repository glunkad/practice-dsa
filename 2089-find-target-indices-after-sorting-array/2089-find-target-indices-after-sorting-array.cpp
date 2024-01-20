class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(begin(nums), end(nums));
        
        vector<int> v;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == target){
                v.push_back(i);
            }
        }
        
        return v;
    }
};