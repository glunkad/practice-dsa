class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int, int> mp;
        
        for(int& num : nums){
            mp[num]++;
        }
       
        // sorting the nums array based on freq using lambda function
        sort(begin(nums), end(nums),[&mp](int& a, int& b){
            return (mp[a] == mp[b]) ? a > b : mp[a] < mp[b];
        });
        
        return nums;
    }
};