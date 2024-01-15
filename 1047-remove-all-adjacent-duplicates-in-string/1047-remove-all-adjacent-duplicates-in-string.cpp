class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> st;
        
        for(char& ch : s){
            if(st.size() != 0 && st.top() == ch){
                st.pop();
            }
            else{
                st.push(ch);
            }
        }
        
        string op;
        while(st.size()!=0){
            op += st.top() ;
            st.pop();
        }
        
        reverse(begin(op), end(op));
        return op;
    }
};