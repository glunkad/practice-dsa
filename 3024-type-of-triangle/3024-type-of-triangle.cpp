class Solution {
public:
    bool isIsosceles (int a, int b, int c){
        if((a == b && b != c) || (b == c && a != c) || (a == c && a != b)){
            return true;
        }
        return false;
    }
    bool isScalene(int a, int b, int c){
        if(a != b && b !=c){
            return true;
        }
        return false;       
    }
    string triangleType(vector<int>& nums) {
        int a = nums[0], b = nums[1], c = nums[2];
        string type;
        
        if(a + b <= c || b + c <= a || a +  c <= b){
            type="none";
        }
        else if(isIsosceles(a,b,c)){
            type="isosceles";
        }
        else if(isScalene(a,b,c)){
            type="scalene";
        }
        else {
            type="equilateral";
        }
            
        return type;
    }
};