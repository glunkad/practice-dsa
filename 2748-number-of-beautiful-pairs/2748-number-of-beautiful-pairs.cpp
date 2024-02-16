class Solution {
public:
    int firstDigit(int& x){
        while(x >= 10){
            x /= 10;
        }
        return x;
    }
    int lastDigit(int& x){
        return x % 10;
    }
    int getGCD(int a, int b){
        int gcd = min(a,b);
        while(gcd > 0){
            if(a % gcd == 0 && b % gcd == 0){
                break;
            }
            gcd--;
        }
        return gcd;
    }
    int countBeautifulPairs(vector<int>& nums) {
        int sz = size(nums);
        int count = 0;
        for(int i = 0; i < sz; i++){
            for(int j = i+1; j < sz; j++){
                if(getGCD(firstDigit(nums[i]), lastDigit(nums[j])) == 1){
                    count++;
                }
            }
        }
        return count;
    }
};