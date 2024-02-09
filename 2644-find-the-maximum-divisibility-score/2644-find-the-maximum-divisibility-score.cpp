class Solution {
public:
    int maxDivScore(vector<int>& nums, vector<int>& divisors) {
        int score = 0;
        unordered_map<int,int> mp;
        
        set<int> s(begin(divisors),end(divisors));
        
        for(const int& divisor : s){
            int cnt = 0;
            for(int& num : nums){
                if(num % divisor == 0){
                    cnt++;
                }
            }
            mp[divisor] = cnt;
        }
        
        int ans = INT_MAX;
        for(auto& [f,s] : mp){
            if(score < s){
                score = s;
                ans = f; 
            }
            else if(score == s){
                ans = min(ans,f);
            }
        }
        
        return ans;
    }
};