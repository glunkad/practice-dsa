class Solution {
public:
    bool isVowel(char ch){
        vector<char> v = {
            'a','e','i','o','u',
            'A','E','I','O','U'
        };
        for(char c : v){
            if(c == ch){
                return true;
            }
        }
        return false;
    }
    string sortVowels(string s) {
        string vowels;
        string op = s;
        int sz = size(s);
        
        for(int i = 0; i < sz; i++){
            if(isVowel(op[i])){
                vowels+=op[i];
                op[i] = '0';
            }
        }
        
        sort(begin(vowels),end(vowels));
        
        int j = 0;
        for(int i = 0; i < sz ; i++){
            if(op[i] == '0'){
                op[i] = vowels[j];
                j++;
            }
        }
        
        return op;
    }
};