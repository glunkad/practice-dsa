class Solution {
public:
    int maxInArray(vector<int>& arr){
        int max = arr[0];
        for(int i = 1; i < arr.size(); i++){
            if(max < arr[i]){
                max = arr[i];
            }
        }
        return max;
        
    }
    int minInArray(vector<int>& arr){
        int min = arr[0];
        for(int i = 1; i < arr.size() ; i++){
            if(min > arr[i]){
                min = arr[i];
            }
        }
        return min;
    }
    
    int getGCD(int a,int b){
        int gcd = min(a,b);
        while(gcd > 0){
            if(a % gcd == 0 && b % gcd == 0){
                return gcd;
            }
            gcd-=1;
        }
        return -1;
    }
    
    int findGCD(vector<int>& nums) {
        int min = minInArray(nums);
        int max = maxInArray(nums);
        return getGCD(min,max);
    }
};