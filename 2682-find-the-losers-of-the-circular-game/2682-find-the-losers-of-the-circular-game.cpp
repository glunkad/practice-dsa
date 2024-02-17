class Solution {
public:
    vector<int> circularGameLosers(int n, int k) {
        vector<int> mp(n+1,0);
        int person = 1;
        mp[person]++;
        
        bool f = true;
        for(int i = 1; i <= n && f; i++){
            person = ( person + i * k ) % n;
            if(person == 0){
                person = n;
            }
            if(mp[person] > 0){
                f = false;
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