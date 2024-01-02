class Solution {
public:
    int countDigits(int num) {
        int count = 0;
        int x = num ;
        
        while(x > 0){
            int tmp = x % 10;
            if(num % tmp == 0){
                count += 1;
            }
            x = x / 10;
        }
        
        return count;
    }
};