class Solution {
public:
    int totalWealth(vector<int>& v){
        int total = 0;
        for(int& money : v){
            total += money;
        }
        return total;
    }
    int maximumWealth(vector<vector<int>>& accounts) {
        int richest = 0;
        for(vector<int>& v: accounts){
            int wealth = totalWealth(v);
            if(richest < wealth){
                richest = wealth;
            }
        }
        return richest;
    }
};