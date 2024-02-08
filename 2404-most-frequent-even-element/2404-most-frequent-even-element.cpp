class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        unordered_map<int, int> mp;
        for(int& x : nums){
            if(x % 2 == 0){
                mp[x]++;
            }
        }
        
        int minNum = nums.size();
        int maxFreq = 0;
        
        for(auto& [f,s] : mp){
            if(maxFreq < s){
                maxFreq = s;
                minNum = f;
            }
            else if(maxFreq == s){
                minNum = min(minNum, f);
            }
        }
        
        return minNum == nums.size() ? -1 : minNum;
    }
};