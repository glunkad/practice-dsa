class Solution {
public:
    int search(vector<int>& nums, int t) {
        int lo = 0;
        int hi = nums.size() - 1;
        
        while(lo <  hi){ 
            int mid = lo + (hi - lo ) / 2 ;
            
            if(nums[mid] >= t){
                hi = mid;
            }
            else{
                lo = mid + 1;
            }
        }
        if(nums[lo] == t){
            return lo;
        }
        return -1;
    }
};