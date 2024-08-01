class Solution {
public:
    void solve(vector<int>& nums, int start, vector<vector<int>>& v){
        if(start == nums.size()-1){
            v.push_back(nums);
            return ;
        }
        for(int i = start; i < nums.size(); i++){
            swap(nums[start],nums[i]);
            solve(nums,start+1,v);
            swap(nums[i],nums[start]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> v;
        solve(nums,0,v);
        return v;
    }
};