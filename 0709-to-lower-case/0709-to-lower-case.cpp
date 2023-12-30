class Solution {
public:
    string toLowerCase(string s) {
        string op;
        
        for(char ch : s){
            if('A' <= ch && ch <= 'Z'){
                ch+=32;
            }
            op += ch;
        }
        
        return op;
    }
};