class Solution {
public:
    vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {
        map<int, vector<int>> mp;
        
        for(int i = 0; i < size(score); i++){
            mp[score[i][k]] = score[i];
        }
        
        vector<vector<int>> v;
        for(auto& [f,s] : mp){
            v.push_back(s);
        }
        
        reverse(begin(v), end(v));
        return v;
    }
};