class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        int leftMoney = money ;
        
        sort(begin(prices),end(prices));
        
        leftMoney -= prices[0]+prices[1];
        
        return leftMoney >= 0 ? leftMoney : money;
    }
};