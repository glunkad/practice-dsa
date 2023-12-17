class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int x = 0;
        for(string& opt : operations) {
            if(opt[1] == '-'){
                x -= 1;
            }
            if(opt[1] == '+'){
                x += 1;
            }
        }
        return x;
    }
};