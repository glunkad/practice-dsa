class Solution {
public:
    vector<int> circularGameLosers(int n, int k) {
        vector<int> mp(n+1,0);
        
        int person = 1;
        mp[1]++;
        bool f = true;
        
        for(int i = 1; i <= n && f; i++){
            person = (person+i*k) % n;
            
            if(mp[person] == 1){
                f = false;
            }
            if(person == 0){
                mp[n]++;
            }
            mp[person]++;
            
        }
        
        vector<int> v;
        for(int i = 1; i <= n; i++){
            if(mp[i] == 0){
                v.push_back(i);
            }
        }
        
        return v;
    }
};