class Solution {
public:
    int getDistance(int x1, int y1, int x2, int y2){
        int d = (x1-x2)*(x1-x2) + (y1-y2)*(y1-y2);
        return d;
    }
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
        int count;
        vector<int> v;
        
        for(vector<int>& circle: queries){    
            count =  0;
            int x1 = circle[0], y1 = circle[1], r = circle[2];
            
            for(vector<int>& point :  points){
                int x2 = point[0], y2 = point[1];
                int d = getDistance(x1,y1,x2,y2);
                
                if(d <= r*r) count++;
            }
            v.push_back(count);
        }
        return v;
    }
};