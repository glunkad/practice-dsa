class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> mp;
        
        for(string& s : strs){
            string tmp = s;
            sort(begin(tmp),end(tmp));
            mp[tmp].push_back(s);
        }
        
        vector<vector<string>> v;
        for(auto [f,s] : mp){
            v.push_back(s);
        }
        
        return v;
    }
};