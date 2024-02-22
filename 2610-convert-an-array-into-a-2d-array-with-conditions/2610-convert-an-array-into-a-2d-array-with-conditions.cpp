class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        unordered_map<int,int> mp;
        
        int sz = 0;
        for(int& num  : nums) {
            mp[num]++;
            sz = max(sz, mp[num]);
        }
        
        vector<vector<int>> v(sz);
        for(auto& [num, freq] : mp){
            for(int i = 0; i <  freq; i++){
                v[i].push_back(num);
            }
        }
        
        return v;
    }
};