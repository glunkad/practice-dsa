class Solution {
public:
    int mySqrt(int x) {
        long lo = 0;
        long hi = x;
        
        while(lo < hi){
            long mid = lo + (hi - lo) / 2;
            if(mid * mid > x){
                hi = mid;
            }
            else{
                lo = mid + 1;
            }
        }
        if(lo == 0) return 0;
        if(lo == 1) return 1;
        return lo-1;
    }
};