class Solution {
public:
    int maxInArray(vector<int>& v){
        int max = 0;
        for(int& c : v){
            if(max < c){
                max = c;
            }
        }
        return max;
    }
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxCandies = maxInArray(candies);
        vector<bool> v;
        for(int& candy : candies){
            int total = candy + extraCandies;
            v.push_back(total >= maxCandies);
        }
        return v;
    }
};