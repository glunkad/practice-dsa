class Solution {
public:
    string interpret(string s) {
        int sz = s.size();
        string op = "";
        
        for(int i = 0; i < sz;){
            if(s[i] == '(' and s[i+1] == ')'){
                op += "o";
                i += 2;
            }else if(s[i] == '(' and s[i+1] != ')'){
                op += "al";
                i += 4; 
            }else{
                op += "G";
                i += 1;
            }
        }
        return op;
    }
};