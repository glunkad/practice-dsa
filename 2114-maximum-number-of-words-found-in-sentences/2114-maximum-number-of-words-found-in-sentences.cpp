class Solution {
public:
    int countWords(string& sentence){
        int count = 0 ;
        for(char& ch : sentence){
            if(ch == ' '){
                count += 1;
            }
        }
        return count+1;
    }
    int mostWordsFound(vector<string>& sentences) {
        int max = 0;
        for(string& sentence : sentences){
            int count = countWords(sentence);
            if(max < count){
                max = count;
            }
        }
        return max;
    }
};