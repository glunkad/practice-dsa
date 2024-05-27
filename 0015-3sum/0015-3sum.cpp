class Solution {
public:
    
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(begin(nums),end(nums));
        
        int t = 0;
        int sz = nums.size();
        set<vector<int>> s;
        
        for(int i = 0; i < sz; i++){
            int left = i + 1;
            int right = sz - 1;
            while(left < right){
                int sum = nums[i]+nums[left]+nums[right];
                if(sum == t){
                    s.insert({nums[left],nums[right],nums[i]});
                    left++;
                    right--;
                }
                else if(sum < t){
                    left++;
                }
                else{
                    right--;
                }
            }
        }
        vector<vector<int>> v;
        for(auto triplets : s ){
            v.push_back(triplets);
        }
        return v;
    }
};