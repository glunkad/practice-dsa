class Solution {
public:
    int reverseNum(int x){
        int num = 0;
        while(x > 0){
            num = num *10 + x % 10;
            x /= 10;
        }
        return num;
    }
    int countDistinctIntegers(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int& num : nums){
            mp[num]++;
            int x = reverseNum(num);
            mp[x]++;
            
        }
        
        int count = 0;
        for(auto [f,s] : mp){
            count++;
        }
        
        return count;
    }
};