class Solution {
public:
    int characterReplacement(string s, int k) {
        int start = 0, end = 0, d = 0, counter = 0;
        int sz = s.size();
        unordered_map<char,int> map;

        while(end < sz){
            map[s[end]]++;
            counter = max(counter, map[s[end]]);
            end++;
            if(end - start > counter + k){
                map[s[start]]--;
                start++;
            }
            d = max(d, end - start);

        }
        return d;
    }
};