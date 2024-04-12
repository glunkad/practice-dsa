class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char> mp1, mp2;
        
        for(int i = 0 ; i < s.size() ; i++){
            char ch1 = s[i];
            char ch2 = t[i];
            
            if(mp1[ch1] > 0 && mp1[ch1] != ch2){
                return false;
            }
            if(mp2[ch2] > 0 && mp2[ch2] != ch1){
                return false;
            }
            
            mp1[ch1] = ch2;
            mp2[ch2] = ch1;
        }
        return true;
    }
};