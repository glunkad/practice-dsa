class Solution {
public:
    string reversePrefix(string word, char ch) {
        auto found = word.find(ch);
        
        if(found == string::npos){
            return word;
        }
        
        
        string op;
        for(int i = found; i >= 0; i--){
            op += word[i];
        }
        
        for(int i = found+1; i < word.size(); i++){
            op += word[i];
        }
        
        return op;
    }
};