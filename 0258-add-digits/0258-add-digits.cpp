class Solution {
public:
    int getSumOfDigits(int x){
        int sum = 0;
        
        while(x > 0){
            sum += x % 10;
            x /= 10;
        }
        
        return sum ;
    }
    int addDigits(int num) {
        int sum = getSumOfDigits(num);
        cout << sum;
        
        while(sum > 9){
            sum = getSumOfDigits(sum);
        }
        
        return sum;
    }
};