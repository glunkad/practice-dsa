class Solution {
public:
    bool areTwoStringsEqual(string& s1, string& s2){
        for(int i = 0; i < s1.size(); i++){
            if(s1[i] != s2[i]){
                return false;
            }
        }
        return true;
    }
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string s1="", s2="";
        for(int i = 0; i < word1.size(); i++){
            s1+=word1[i];
        }
        for(int i = 0; i < word2.size(); i++){
            s2+=word2[i];
        }
        return s1==s2;
    }
};