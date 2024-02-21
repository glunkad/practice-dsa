class Solution {
public:
    int getArea(int l, int w){
        return l*w;
    }
    
    int getDiagonal(int l, int w){
        int diagonal = l*l + w*w;
        return diagonal;
    }
    
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        int max_diagonal = INT_MIN;
        int max_area = INT_MIN;
        
        for(vector<int>& rect : dimensions){
            int d = getDiagonal(rect[0],rect[1]);
            int area = getArea(rect[0],rect[1]);
            
            if(max_diagonal < d){
                max_diagonal = d;
                max_area = area; 
            }
            else if(max_diagonal == d){
                max_area = max(max_area, area);
            }
        }
        
        return max_area;
    }
};