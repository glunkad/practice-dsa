class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<char> st;
        string op;
        
        for(char ch : s){
            if(ch ==  '('){
                if(st.size() > 0){
                    op += ch;
                }
                st.push(ch);
            }
            else{
                if(st.size() > 1){
                    op += ch ;
                }
                st.pop();
            }
        }
        
        return op;
    }
};