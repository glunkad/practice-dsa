class Solution {
public:
    string mostCommonWord(string p, vector<string>& banned) {
        for(auto& c : p)
            c =  isalpha(c)? tolower(c) : ' '; 
        
        istringstream ss(p);
        
        string str;
        unordered_map<string, int> mp;
        
        while(ss >> str){
            mp[str]++;
        }
        
        for(string& s : banned){
            mp[s] = 0;
        }
        
        int most_freq = 0;
        
        string res;
        for(auto& [f,s] : mp){
             
            if(most_freq < s  ){
                most_freq = s;
                res = f;
            }
        }
        
        return res;
        
        
    }
};