class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int sz = nums.size();
        vector<bool> seen(sz+1);
        
        for(int& num : nums){
            seen[num] = true;
        }
        
        vector<int> v;
        for(int i = 1; i < sz + 1; i++){
            if(!seen[i]){
                v.push_back(i);
            }
        }
        
        return v;
    }
};