class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        string str;
        vector<string> v;
        
        while(ss >> str){
            v.push_back(str);
        }
        
        reverse(begin(v),end(v));
        
        string op;
        for(int i = 0; i < v.size(); i++){
            if(i == v.size() - 1){
                op += v[i];
            }
            else{
                op += v[i]+" ";
            }
        }
        return op;
    }
};