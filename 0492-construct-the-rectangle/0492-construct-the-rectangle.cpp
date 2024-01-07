class Solution {
public:
    vector<int> constructRectangle(int area) {
        
        int width = 1;
        for(int w = 1; w <= sqrt(area); w++){
            if(area % w == 0){
                width = w;
            }
        }
        return {area / width, width};
    }
};