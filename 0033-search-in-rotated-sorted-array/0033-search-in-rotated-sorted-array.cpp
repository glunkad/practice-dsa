class Solution {
public:
    int binarySearch(vector<int>& nums, int lo, int hi, int t){
        while(lo < hi){
            int mid = lo + (hi  - lo) / 2;
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
    int search(vector<int>& nums, int t) {
        int lo = 0;
        int hi = nums.size() - 1;
        
        if(nums[lo] < nums[hi]){
            return binarySearch(nums, lo, hi, t);
        }
        
        int pivot = -1;
        while(lo < hi){
            int mid = lo + (hi - lo) / 2;
            
            if(nums[mid] < nums[hi]){
                hi = mid;
            }
            else{
                lo = mid + 1;
            }
        }
        pivot = lo;
        int ind1 = binarySearch(nums,0,pivot,t);
        int ind2 = binarySearch(nums,pivot, nums.size()-1,t);
        if(ind1 == -1) return ind2;
        else return ind1;
    }
};