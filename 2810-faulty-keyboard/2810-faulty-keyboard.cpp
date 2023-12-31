class Solution {
public:
    string reverseString(string s){
        string op;
        
        for(int i = s.size() - 1; i >= 0; i--){
            op += s[i];
        }
        
        return op;
    }
    string finalString(string s) {
        string op;
        
        for(char ch : s){
            if(ch == 'i'){
                op = reverseString(op);
            }
            else{
                op += ch;
            }
        }
        
        return op;
    }
};