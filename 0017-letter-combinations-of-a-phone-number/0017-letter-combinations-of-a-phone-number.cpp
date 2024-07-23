class Solution {
public:
    void backtrack(vector<string>& mp, string digits,int i, string currStr,vector<string>& res){
        if(digits.size() == currStr.size()){
            res.push_back(currStr);
            return;
        }
        for(char ch : mp[digits[i] - '0']){
            backtrack(mp,digits,i+1,currStr+ch,res);
        }
    }
    vector<string> letterCombinations(string digits) {
        vector<string> mp = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        vector<string> res;
        if(digits.size() == 0){
            return res;
        }
        backtrack(mp,digits,0,"",res);
        return res;
    }
};