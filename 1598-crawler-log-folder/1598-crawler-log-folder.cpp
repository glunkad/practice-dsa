class Solution {
public:
    int minOperations(vector<string>& logs) {
        stack<string> st;
        int count = 0;
        for(string& log : logs){
            if(log == "../"){
                if(st.size() != 0){
                    st.pop();
                }
            }
            else if(log == "./"){
                continue;
            }
            else{
                st.push(log);
            }
        }
        
        return st.size();
    }
};