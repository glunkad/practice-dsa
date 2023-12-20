class Solution {
public:
    int getCount(vector<int>& v){
        int count = 0;
        int largest = getLargest(v);
        for(int& len : v){
            if(len == largest){
                count += 1;
            }
        }
        return count;
    }
    int getLargest(vector<int>& v){
        int max = 0;
        
        for(int i = 0; i < v.size(); i++){
            if(max < v[i]){
                max = v[i];
            }
        }
        
        return max;
    }
    int getMin(int& a, int& b){
        if(a > b){
            return b;
        }
        else{
            return a;
        }
    }
    int countGoodRectangles(vector<vector<int>>& rects) {
        vector<int> v;
        for(vector<int>& rect : rects){
            int min = getMin(rect[0],rect[1]);
            v.push_back(min);
        }
        
        return getCount(v);
    }
};