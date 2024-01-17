class Solution {
public:
    string getStr(string s){
        string op;
        
        for(int i = 0; i < s.size()-1; i++){
            op += s[i];
        }
        cout << op;
        return op;
    }
    
    string sortSentence(string s) {
        stringstream ss(s);
        string tmp;
        vector<string> words;
        int count = 0;
        
        while(ss >> tmp){
            words.push_back(tmp);
            count += 1;
        }
        
        vector<string> op(count+1);
        
        for(string& word : words){
            int ind = word.back() - '0';
            op[ind] = getStr(word);
        }
        
        string output;
        for(int i = 0; i < op.size(); i++){
            output += op[i];
            if(i != op.size() -1 && i != 0){
                output += " ";
            }
        }
        return output;
    }
};