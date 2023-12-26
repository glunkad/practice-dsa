class Solution {
public:
    bool isPrefix(string& s1, string& s2){
        for(int i = 0; i < s1.size() ; i++){
            if(s1[i] != s2[i]){
                return false;
            }
        }
        return true;
    }
    int countPrefixes(vector<string>& words, string s) {
        int count = 0;
        
        for(int i = 0; i < words.size(); i++){
            if(isPrefix(words[i], s)){
                count += 1;
            }
        }
        
        return count;
    }
};