class Solution {
public:
    int getScore(vector<int>& v){
        int score = 0 ,rounds = 0;
        
        for(int& point : v){
            score += (rounds > 0) ? point*2 : point;
            rounds--;
            if(point == 10) rounds = 2;
        }
        
        return score;
    }
    int isWinner(vector<int>& player1, vector<int>& player2) {
        int score1 = getScore(player1);
        int score2 = getScore(player2);
        
        if(score1 > score2){
            return 1;
        }
        else if(score1 < score2){
            return 2;
        }
        else{
            return 0;
        }
    }
};