class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string op = s;
        for(int i = 0; i < s.size(); i++){
            op[indices[i]] = s[i];
        }
        return op;
    }
};