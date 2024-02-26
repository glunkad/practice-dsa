class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int sz = size(A);
        int cnt = 0;
        vector<int> mp(sz+1);
        vector<int> v(sz);
    
        for(int i = 0; i < sz; i++){       
            mp[A[i]]++;
            if(mp[A[i]] == 2) cnt++;
            
            mp[B[i]]++;
            if(mp[B[i]] == 2) cnt++;
            
            v[i] = cnt;
        }
        
        return v;
    }
};