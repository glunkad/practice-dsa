class Solution {
public:
    bool wordPattern(string pattern, string s){
        stringstream ss(s);
        vector<string> v;
        string str;

        while(ss >> str){
            v.push_back(str);
        }
        
        if(v.size() != pattern.size()){
            return false;
        }

        unordered_map<char,string> mp1;
        unordered_map<string, char> mp2;

        for(int i = 0; i < pattern.size(); i++){
            char ch = pattern[i];
            if(mp1.find(ch) == mp1.end() && mp2.find(v[i]) == mp2.end()){
                mp1[ch] = v[i];
                mp2[v[i]] = ch;
            }
            else{
                if(mp1[ch] != v[i] || mp2[v[i]] != ch) {
                    return false;
                }
            }
        }
        return true;
    }

};