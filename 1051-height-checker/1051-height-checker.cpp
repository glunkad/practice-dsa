class Solution {
public:
    int heightChecker(vector<int>& h) {
        vector<int> expected = h;
        sort(begin(expected),end(expected));
        int count = 0;
        
        for(int i = 0; i < h.size() ; i++){
            if(h[i] != expected[i]){
                count += 1;
            }
        }
        
        return count;
    }
};