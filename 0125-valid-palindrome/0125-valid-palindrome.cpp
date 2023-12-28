class Solution {
public:
    string getString(string s){
        string s1 = "";
        
        for(char ch : s){
            if(isalnum(ch)){
                s1+=(char)tolower(ch);
            }
        }
        
        return s1;
    }
    bool isPalindrome(string s) {
        string s1 = getString(s);
        int sz = s1.size() ;
     
        for(int i = 0; i < sz ; i++){
            if(s1[i] != s1[sz - i - 1]){
                return false;
            }
        }
        return true;
    }
};