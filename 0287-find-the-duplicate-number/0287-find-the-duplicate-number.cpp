class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();
        vector<int> v(n+1,0);
        
        for(int& num : nums){
            if(v[num] == 1){
                return num;
            }
            v[num]++;
        }
        return -1;
    }
};