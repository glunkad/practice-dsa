class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int sz = size(nums);
        int szlc = 0;
        int count = 0;
        
        for(int i = 1; i < sz; i++){
            if(nums[i-1] < nums[i]){
                count++;
            }
            else{
                count = 0;
            }
            szlc = max(szlc, count);
        }
        return szlc+1;
    }
};