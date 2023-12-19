class Solution {
public:
    bool isPalindrome(string& s){
        int sz = s.size();
        for(int i = 0; i < sz / 2; i++){
            if(s[i] != s[sz-1-i]){
                return false;
            }
        }
        return true;
    }
    string firstPalindrome(vector<string>& words) {
        for(string& word: words){
            if(isPalindrome(word)){
                return word;
            }
        }
        return "";
    }
};