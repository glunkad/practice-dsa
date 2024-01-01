class Solution {
public:
    int getNumVal(string word){
        string op;
        
        for(char& ch : word){
            op += ch - 49;
        }
        
        return stoi(op);
    }
    bool isSumEqual(string firstWord, string secondWord, string targetWord) {
        int firstVal = getNumVal(firstWord);
        int secondVal = getNumVal(secondWord);
        int targetVal = getNumVal(targetWord);
        
        return firstVal + secondVal == targetVal;
    }
};