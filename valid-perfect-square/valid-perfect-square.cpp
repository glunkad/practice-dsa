class Solution {
public:
    bool isPerfectSquare(int num) {
        long lo = 1;
        long hi = num - 1;
        
        while(lo < hi){
            long mid = lo + (hi - lo)  / 2;
            if(mid * mid >=  num){
                hi = mid;
            }
            else{
                lo = mid + 1;
            }
        }
        if(lo == num / lo){
            return true;
        }
        return false;
    }
};