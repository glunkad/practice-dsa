class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        int count = 0;
        
        for(string pat : patterns){
            auto found = word.find(pat);
            if(found != string::npos){
                count += 1;
            }
        }
        
        return count;
    }
};