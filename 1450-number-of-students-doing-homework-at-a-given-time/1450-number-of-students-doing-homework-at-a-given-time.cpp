class Solution {
public:
    int busyStudent(vector<int>& startTime, vector<int>& endTime, int qTime) {
        int sz = startTime.size();
        int count = 0;
        
        for(int i = 0; i < sz; i++){
            if(startTime[i] <= qTime && qTime <= endTime[i]){
                count += 1;
            }
        }
        return count;
    }
};