class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int len = pref.size();
        int count = 0;
        for(string& word :words){
            if(word.substr(0,len) == pref){
                count+=1;
            }
        }
        return count;
    }
};