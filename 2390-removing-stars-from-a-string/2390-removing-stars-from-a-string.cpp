class Solution {
public:
    string removeStars(string s) {
        string op;
        stack<char> st;
        
        for(char& ch : s){
            if(ch == '*'){
                st.pop();
            }
            else{
                st.push(ch);
            }
        }
        while(!st.empty()){
            op += st.top();
            st.pop();
        }
        
        reverse(begin(op),end(op));
        return op;
    }
};