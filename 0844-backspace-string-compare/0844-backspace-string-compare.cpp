class Solution {
public:
    string getString(string s){
        string op;
        stack<char> st;
        
        for(char& ch : s){
            if(st.size() == 0 && ch != '#'){
                st.push(ch);
            }
            else if(ch == '#' && st.size()!=0){
                st.pop();
            }
            else if(ch == '#' && st.size() == 0){
                continue;
            }
            else{
                st.push(ch);
            }
        }
        
        while(st.size()){
            op += st.top();
            st.pop();
        }
        
        reverse(begin(op), end(op));
        return op;
    }
    
    bool backspaceCompare(string s, string t) {
        return getString(s) == getString(t);
    }
};