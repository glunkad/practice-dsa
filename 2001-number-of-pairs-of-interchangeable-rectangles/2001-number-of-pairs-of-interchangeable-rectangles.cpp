class Solution {
public:
    long long interchangeableRectangles(vector<vector<int>>& rects) {
        long long count = 0;
        unordered_map<double, int> mp;
        
        for(vector<int>& rect : rects){
            double w = rect[0], h = rect[1];
            double r = w / h;
            
            if(mp.count(r)) count+=mp[r];
            
            mp[r]++;
            
        }
        
        
        return count;
    }
};