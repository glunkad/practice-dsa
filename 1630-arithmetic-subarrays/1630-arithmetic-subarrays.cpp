class Solution {
public:
    bool isAP(vector<int>& v, int start, int end){
        vector<int> x;
        
        for(int i = start; i <= end; i++) x.push_back(v[i]);
        
        sort(x.begin(), x.end());
        
        int d0 = x[1] - x[0];
        for(int i = 2; i < size(x); i++){
            int d = x[i] - x[i-1];
            
            if(d != d0){
                return false;
            }
        }
        return true;
    }
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        int m = size(l);
        vector<bool> v(m);
        
        for(int i = 0; i < m ; i++){
            v[i] = isAP(nums, l[i], r[i]);
        }
        
        return v;
    }
};