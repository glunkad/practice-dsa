class Solution {
public:
    int minSteps(string s, string t) {
        vector<int> mp(26,0);
        
        for(char& ch : s) mp[ch - 'a']++;
        
        for(char& ch : t) mp[ch - 'a']--;
        
        int count = 0;
        
        for(int i = 0; i < size(mp); i++) count += abs(mp[i]);
        
        return count;
    }
};