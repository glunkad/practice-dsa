class Solution {
public:
    string arrangeWords(string text) {
        char cap = tolower(text[0]);
        text[0] = cap;
        
        stringstream ss(text);
        string s;
        
        map<int, vector<string>> mp;
        
        while(ss >> s){
            mp[s.length()].push_back(s);
        }
        
        string op;
        for(auto [f,s] : mp){
            for(string st : s){
                op += st + " ";
            }
        }
        
        cap = toupper(op[0]);
        op[0] = cap;
        op.pop_back();
        
        return op;
    }
};