class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        int start = 0, end = 0, counter = 0;
        long long d = 0;
        int sz = nums.size(); 
        long long currSum = 0;
        unordered_map<int,int> mp;
        while(end < sz){
            currSum += nums[end];   

            mp[nums[end]]++;

            if(mp[nums[end]] > 1){
                counter++;
            }
            end++;

            while( end - start > k || counter > 0){
                if(mp[nums[start]] > 1){
                    counter--;
                }
                mp[nums[start]]--;
                currSum -= nums[start];
                start++;
            }
            if(end - start == k && counter == 0) d = max(d,currSum);

        }
        return d;
    }
};
