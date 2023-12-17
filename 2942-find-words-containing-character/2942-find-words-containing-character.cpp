class Solution {
public:
    bool inWord(string s, char ch){
        for(int i = 0; i < s.size() ; i++){
            if(ch == s[i]){
                return true;
            }
        }
        return false;
    }
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> v;
        for(int i = 0; i < words.size() ; i++){
            bool ans =  inWord(words[i], x);
            if(ans){
                v.push_back(i);
            }
        }
        return v;
    }
};