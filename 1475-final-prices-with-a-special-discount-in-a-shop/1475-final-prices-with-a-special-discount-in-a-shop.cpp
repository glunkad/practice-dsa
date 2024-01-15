class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        int n = prices.size();
        stack<int> st;
        st.push(0);
        vector<int> v(n); 
        
        for(int i = n - 1; i >= 0; i--){
            int curr = prices[i];
             
            while(st.top() > curr){
                st.pop();
            }
            
            v[i] = curr - st.top();
            st.push(curr);
         }
        
        return v;
    }
};