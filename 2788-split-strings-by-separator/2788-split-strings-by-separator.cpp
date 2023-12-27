class Solution {
public:
    vector<string> splitWordsBySeparator(vector<string>& words, char sep) {
        vector<string> v;
        
        for(string& word: words){
            string s = "";
            for(char& ch : word){
                if(ch == sep && s != ""){
                    v.push_back(s);
                    s = "";
                }
                if(ch != sep){
                    s+=ch;
                }
            }
            if(s!=""){
                v.push_back(s);
            }
        }
        
        return v;
    }
};