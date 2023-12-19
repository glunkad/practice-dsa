class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image){
        int sz = image.size(); 
        vector<vector<int>> v;
        
        for(int i = 0; i < sz; i++){
            reverse(begin(image[i]), end(image[i]));
        }
        
        for(int i = 0; i < sz; i++){
            for(int j = 0; j < sz; j++){
                if(image[i][j] == 1){
                    image[i][j] = 0;
                }
                else{
                    image[i][j] = 1;
                }
            }
        }
        
        return image;
    }
};