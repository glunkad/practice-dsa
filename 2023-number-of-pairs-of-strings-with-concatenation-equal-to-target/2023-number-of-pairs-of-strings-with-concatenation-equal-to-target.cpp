class Solution {
public:
    int numOfPairs(vector<string>& nums, string target) {
        int count = 0;
        int sz = size(nums);
        for(int i = 0; i < sz; i++){
            for(int j = 0;  j < sz; j++){
                if(nums[i]+nums[j] == target && i != j){
                    count++;
                }
            }
        }
        return count;
    }
};