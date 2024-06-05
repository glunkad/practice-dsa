class Solution {
public:
    string multiplyString(int num, string s){
        string op;
        for(int i = 0; i < num; i++){
            op += s;
        }
        return op;
    }
    string decodeString(string s) {
        stack<string> st;

        for(char& ch : s){
            if(ch ==']'){
                string s1;
                while(st.top() != "["){
                    s1 = st.top() + s1;
                    st.pop();
                }
                st.pop() ; // remove the ch == '['
                // get number 
                string numStr;
                while(st.size() != 0 && isdigit(st.top()[0])){
                    numStr = st.top() + numStr;
                    st.pop();
                }
                int num = stoi(numStr);
                st.push(multiplyString(num,s1));
            }
            else{
                st.push(string(1, ch));
            }
        }
        string op;
        while(st.size() != 0){
            op = st.top() + op;
            st.pop();
        }

    return op;
    }
};