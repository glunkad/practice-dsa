class Solution {
public:
    int noOfDigits(int& n){
        int count = 0;
        while(n > 0){
            count += 1;
            n /= 10;
        }
        return count;
    }
    
    int findNumbers(vector<int>& nums) {
        vector<int> v;
        int count = 0;
        for(int& num: nums){
            int noOfDigit = noOfDigits(num);
            if(noOfDigit % 2 == 0){
                count += 1;
            }
        }
        return count;
    }
};