class Solution {
public:
    int differenceOfSums(int n, int m) {
        vector<int> divisible;
        int totalSum = n * (n + 1) / 2;
        
        int num1 = 0;
        for(int i = 1; i <= n; i++){     
            if(i % m == 0){
                num1 += i;
            }
        }
        
        
        return totalSum - 2 * num1;
        
    }
    
};