class Solution {
public:
    int averageValue(vector<int>& nums) {
        int no = 0 ;
        int sum = 0;
        
        for(int& num : nums){
            if(num % 6 == 0){
                sum += num ;
                no += 1;
            }
        }
        int avg = 0;
        
        if(no == 0){
            return avg;
        }
        
        avg = sum / no ;
        return avg;
    }
};