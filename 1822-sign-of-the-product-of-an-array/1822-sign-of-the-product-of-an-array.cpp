class Solution {
public:
    
    int arraySign(vector<int>& nums) {
        int product = 1;
        
        for(int& num : nums){
            if(num == 0){
                product = 0;
            }
            else if(num > 0){
                product *= 1;
            }
            else{
                product *= -1;
            }
        }
        
        return product;
    }
};