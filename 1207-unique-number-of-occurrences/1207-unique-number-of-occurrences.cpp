class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> mp;
        for(int& x : arr){
            mp[x]++;
        }
        
        vector<int> v;
        for(auto [f,s] : mp){
            if(find(begin(v),end(v), s) != end(v)){
                return false;
            }
            else{
                v.push_back(s);
            }
        }
        return true;
    }
};