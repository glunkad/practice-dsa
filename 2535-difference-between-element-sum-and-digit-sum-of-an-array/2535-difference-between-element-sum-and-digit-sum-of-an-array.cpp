class Solution {
public:
    int getDigitSum(int num){
        int sum = 0 ;
        while(num > 0){
            sum += num % 10 ;
            num /= 10;
        }
        return sum;
    }
    int digitSum(vector<int>& nums){
        int sum = 0;
        for(int& num : nums){
            sum += getDigitSum(num);
        }
        return sum;
    }
    int elementSum(vector<int>& nums){
        int sum = 0;
        for(int& num : nums){
            sum += num;
        }
        return sum;
    }
    int differenceOfSum(vector<int>& nums) {
        int ans = elementSum(nums) - digitSum(nums);
        if(ans > 0){
            return ans;
        }
        else{
            return -ans;
        }
    }
};