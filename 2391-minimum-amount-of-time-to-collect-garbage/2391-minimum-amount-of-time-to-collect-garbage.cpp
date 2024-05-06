class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        unordered_map<char,int> mp;
        
        // calculate prefix sum of travel
        for(int i = 1; i < travel.size(); i++){
            travel[i] += travel[i-1];
        }
        
        
        int sz = garbage.size();
        int time = 0;
        
        for(int i = 0; i < sz ; i++){
            
            for(char& ch : garbage[i]){
                time++;       
                mp[ch] = i;
            }
        }
        
        for(auto& [f,s] : mp){
            if(s != 0){
                time += travel[s-1];
            }
        }
        
        return time;
    }
};