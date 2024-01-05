class Solution {
public:
    bool digitSumEven(int x){
        int sum = 0;
        
        while(x > 0){
            sum += x % 10;
            x /= 10;
        }
        
        return sum % 2 == 0;
    }
    int countEven(int num) {
        int count = 0 ;
        
        for(int i = 2; i <= num; i++){
            if(digitSumEven(i)){
                count += 1;
            }
        }
        
        return count;
    }   
};