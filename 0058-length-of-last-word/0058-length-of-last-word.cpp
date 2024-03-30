class Solution {
public:
    int lengthOfLastWord(string s) {
        stringstream ss(s);
        string tmp;
        vector<string> v;
        
        while(ss >> tmp){
            v.push_back(tmp);
        }
        
        tmp = v[v.size() - 1];
        
        return tmp.size();
    }
};