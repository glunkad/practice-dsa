class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int start = 0, end = 0, counter = 0,d = 0;
        int sz = s.size();
        unordered_map<int,int> mp;
        
        while(end < sz){
            if(mp[s[end]] > 0){
                counter++;
            }
            mp[s[end]]++;
            end++;
            
            while(counter > 0){
                if(mp[s[start]] > 1){
                    counter--;
                }
                mp[s[start]]--;
                start++;
            }
            
            d = max(d,end - start);
        }
        return d;
    }
};