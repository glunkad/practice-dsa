class Solution {
public:
    int countOfLetter(string s, char ch){
        int count = 0;
        
        for(char c : s){
            if(c == ch){
                count += 1;
            }
        }
        
        return count;
    }
    int percentageLetter(string s, char letter) {
        int sz = s.size() ;
        int count = countOfLetter(s, letter);
        return count * 100 / sz; 
    }
};