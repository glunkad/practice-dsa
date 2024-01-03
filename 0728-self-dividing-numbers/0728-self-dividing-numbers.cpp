class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> v;
        
        for(int i = left; i <= right; i++){
            int x = i;
            bool isDivisible = true;
            while(x > 0 && isDivisible){
                int num = x % 10;
                
                if(num == 0 || i % num != 0){
                    isDivisible = false;
                }
                
                x = x / 10;
            }
            if(isDivisible){
                v.push_back(i);
            }
        }
        
        return v;
    }
};