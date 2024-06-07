class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& t) {
        vector<int> v(t.size());
        stack<int> st;
        
        for(int i = 0; i < t.size(); i++){
            while(st.size() > 0 && t[i] > t[st.top()]){
                int x = st.top();
                st.pop();
                v[x] = i - x;
            }
            st.push(i);
        }
        return v;
    }
};