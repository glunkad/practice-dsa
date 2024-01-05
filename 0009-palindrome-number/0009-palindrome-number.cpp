class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0){
            return false;
        }
        
        int num1 = x;
        long long num2 = 0;
        
        while(x != 0){
            num2 = (x % 10) + (10 * num2);
            x /= 10;
        }
        
        return num2 == num1;
        
    }
};