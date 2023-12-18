class Solution {
public:
    string truncateSentence(string s, int k) {
        string op = "";
        for(int i = 0; i < s.size() ; i++){
            if(s[i] == ' '){
                k -= 1;
            }
            if(k > 0){
                op += s[i];
            }
        }
        return op;
    }
};