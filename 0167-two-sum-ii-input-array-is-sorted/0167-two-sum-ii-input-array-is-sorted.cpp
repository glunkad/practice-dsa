class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int lo = 0;
        int hi = numbers.size() - 1;
        while(lo < hi){
            int currentSum = numbers[lo] + numbers[hi];
            if(currentSum == target){
                return {lo+1,hi+1};
            }
            else if(currentSum < target){
                lo += 1;
            }
            else{
                hi -= 1;
            }
        }
        return {};
    }
};