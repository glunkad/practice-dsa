class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        int f = 1;
        while(f){
            if(find(begin(nums),end(nums), original) != end(nums)){
                original *= 2;
            }
            else{
                f = 0;
            }
        }
        return original;
    }
};