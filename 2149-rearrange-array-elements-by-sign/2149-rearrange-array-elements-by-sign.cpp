class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> pos, neg;
        int sz = size(nums);
        
        for(int& num : nums){
            if(num > 0){
                pos.push_back(num);
            }
            else{
                neg.push_back(num);
            }
        }
        
        vector<int> v(sz);
        
        for(int i = 0; i < sz; i++){
            if(i % 2 == 0) v[i] = pos[i/2];
            else v[i] = neg[i/2];
        }
        
        return v;
    }
};