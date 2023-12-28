class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()){
            return false;
        }
        
        unordered_map<char,int> mp;
        
        for(char ch: s){
            mp[ch] += 1;
        }
        
        for(char ch : t){
            if(mp[ch] <= 0){
                return false;
            }
            else{
                mp[ch] -= 1;
            }
        }
        
        return true;
    }
};