class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(char& ch : s){
            if(ch == '{' || ch == '(' || ch == '['){
                st.push(ch);
            }
            else if(st.size() > 0 && 
                    (
                        (ch == ']' && st.top() == '[') ||
                        (ch == '}' && st.top() == '{') ||
                        (ch == ')' && st.top() == '(')
                    )){
                st.pop();
            }
            else{
                return false;
            }
        }
        return st.size() == 0;
        
    }
};