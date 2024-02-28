class Solution {
public:
    int minSteps(string s, string t) {
        int sz = size(s);
        unordered_map<char,int> mp;
        
        for(int i = 0; i < sz; i++){
            mp[s[i]]++;
            mp[t[i]]--;
        }
        
        int count = 0;
        for(auto [f,s] : mp){
            if(s > 0){
                count += s;
            }
        }
        return count;
    }
};