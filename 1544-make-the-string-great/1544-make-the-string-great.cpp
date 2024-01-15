class Solution {
public:
    string makeGood(string s) {
        stack<char> st;
        
        for(char& ch : s){
            if(st.size() != 0){
                if(st.top() == ch + 32 || st.top() == ch - 32){
                    st.pop();
                }
                else{
                    st.push(ch);
                }
            }
            else{
                st.push(ch);
            }
        }
        
        string op;
        while(st.size()){
            op += st.top();
            st.pop();
        }
        
        reverse(begin(op), end(op));
        
        return op;
    }
};