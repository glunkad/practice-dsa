class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int sz = nums.size();

        sort(begin(nums),end(nums));
        int res = nums[0]+nums[1]+nums[2];

        for(int i = 0; i < sz; i++){
            int left = i+1;
            int right = sz - 1;

            while(left < right){
                int sum  = nums[i]+nums[left]+nums[right];

                if(abs(sum - target) < abs(res - target)){
                    res = sum;
                }
                if(sum < target){				
                    left++;
                }
                else{
                    right--;
                }
            }
        }
        return res;
    }
};