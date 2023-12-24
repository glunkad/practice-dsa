class Solution {
public:
    int min(int a, int b){
        if(a < b){
            return a;
        }
        return b;
    }
    
    int smallestEqual(vector<int>& nums) {
        int sz = nums.size() ;
        int smallestIndex = sz;
        
        for(int i = 0; i < sz; i++){
            if(i % 10 == nums[i]){
                smallestIndex = min(smallestIndex, i);
            }
        }
        
        if(smallestIndex == sz){
            return -1;
        }
        return smallestIndex;
    }
};