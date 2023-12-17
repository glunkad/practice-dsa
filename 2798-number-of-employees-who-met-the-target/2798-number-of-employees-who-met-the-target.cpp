class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
        int people = 0;
        for(int& hour : hours){
            if(hour >= target){
                people += 1;
            }
        }
        return people;
    }
};