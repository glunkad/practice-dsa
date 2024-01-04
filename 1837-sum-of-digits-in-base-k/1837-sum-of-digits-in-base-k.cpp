class Solution {
public:
    int sumBase(int n, int k) {
        int num = 0;
        
        while(n > 0){
            num += n % k;
            n = n / k;
        }
        
        return num ; 
    }
};