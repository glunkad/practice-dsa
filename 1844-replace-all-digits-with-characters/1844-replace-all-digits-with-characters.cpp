class Solution {
public:
    string replaceDigits(string s) {
        int sz = s.size();
        
        for(int i = 1; i < sz; i += 2){    
            s[i] += s[i - 1] - '0';
        }
        
        return s;
    }
};