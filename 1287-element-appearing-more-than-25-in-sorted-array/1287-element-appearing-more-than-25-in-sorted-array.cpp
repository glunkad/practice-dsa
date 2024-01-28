class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int req_app = arr.size() * 0.25;
        unordered_map<int, int> mp;
        
        for(int& x : arr){
            mp[x]++;
        }
        
        int count = 0;
        int no = 0;
        
        for(auto& [f,s] : mp){
            if(count < s){
                count = s;
                no = f;
            }
        }
        
        return no;
    }
};