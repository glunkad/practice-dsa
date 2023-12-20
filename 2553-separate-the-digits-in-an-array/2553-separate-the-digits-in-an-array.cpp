class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> v;
        for(int& num : nums){
            int n = num;
            vector<int> tmp;
            while(n > 0){
                int digit = n % 10;
                n  = n / 10;
                tmp.push_back(digit);
            }
            for(int i = tmp.size() - 1; i>=0; i--){
                v.push_back(tmp[i]);
            }
        }
        return v;
    }
};