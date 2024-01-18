class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
        sort(begin(seats), end(seats));
        sort(begin(students), end(students));
        
        int noOfMoves = 0;
        
        for(int i = 0; i < seats.size(); i++){
            noOfMoves += abs(students[i] - seats[i]);
        }
        
        return noOfMoves;
    }
};