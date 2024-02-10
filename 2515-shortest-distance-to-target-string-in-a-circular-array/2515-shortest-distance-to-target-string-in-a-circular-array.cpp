class Solution {
public:
    int closetTarget(vector<string>& words, string target, int startIndex) {
        int res = INT_MAX;
        int n = size(words);
        
        for(int i = 0; i < n; i++){
            if(words[i] == target){
                res = min({res, abs(i - startIndex), n - abs(i - startIndex)});
            }
        }
        
        return res == INT_MAX ? -1 : res;
    }
};