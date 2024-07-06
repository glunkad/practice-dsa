class Solution {
public:
    void dfs(vector<vector<int>>& img,int sr, int sc, int color,int newColor){
        if(sr < 0 || sc < 0 || sr >= img.size() || sc >= img[0].size() ||img[sr][sc] != color){
            return;
        }
        img[sr][sc] = newColor;
        dfs(img,sr-1,sc,color,newColor);
        dfs(img,sr+1,sc,color,newColor);
        dfs(img,sr,sc-1,color,newColor);
        dfs(img,sr,sc+1,color,newColor);
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        if(image[sr][sc] == color){
            return image;
        }
        dfs(image,sr,sc,image[sr][sc],color);
        return image;
    }
};