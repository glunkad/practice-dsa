class Solution {
public:
    int numEquivDominoPairs(vector<vector<int>>& d) {
        map<vector<int>,int> mp;
        int count = 0;
        
        for(vector<int>& v :d ){
            sort(begin(v),end(v));
            count += mp[v];
            mp[v]++;
        }
        
        return count;
    }
};