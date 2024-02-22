class Solution {
public:
    vector<int> minOperations(string boxes) {
        int sz = size(boxes);
        vector<int> v(sz);
        int steps;
        
        for(int i = 0; i < sz; i++){
            steps = 0;
            for(int j = 0; j < sz; j++){
                if(boxes[j] == '1'){
                    steps += abs(i-j);
                }
            }
            v[i] = steps;
        }
        
        return v;
    }
};