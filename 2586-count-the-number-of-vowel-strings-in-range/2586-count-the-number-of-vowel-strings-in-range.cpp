class Solution {
public:
    bool isVowel(char ch){
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
            return true;
        }
        return false;
    }
    int vowelStrings(vector<string>& words, int left, int right) {
        int count = 0 ;
        
        for(int i = left; i <= right ; i++){
            if(isVowel(words[i].front()) && isVowel(words[i].back())){
                count += 1;
            }
        }
        return count;
    }
};