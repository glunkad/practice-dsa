class Solution {
public:
    vector<int> findingUsersActiveMinutes(vector<vector<int>>& logs, int k){
        vector<int> v(k,0);
        unordered_map<int,set<int>> mp;
        int sz = size(logs);
        
        for(vector<int>& log : logs){
            mp[log[0]].insert(log[1]);
        }
        
        for(auto [f,s] : mp){
            v[size(s)-1]++;
        }
        
        return v;
    }
};