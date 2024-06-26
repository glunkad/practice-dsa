class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        sort(begin(nums),end(nums));
        int count = 0;
        int sz = nums.size();

        for(int i = sz - 1; i > 0 ; i--){
            int left = 0;
            int right = i  - 1;

            while(left < right){

                if(nums[left]+nums[right] > nums[i]){
                    count += right - left;
                    right--;
                }
                else{
                    left++;
                }
            }
        }
        return count;
}		

};