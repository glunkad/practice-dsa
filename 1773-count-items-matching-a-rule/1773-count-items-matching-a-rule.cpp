class Solution {
public:
int getIndex(string& ruleKey){
    if(ruleKey == "type") {
        return 0;
    }
    else if(ruleKey == "color"){
        return 1;
    }
    else if(ruleKey == "name"){
        return 2;
    }
    return -1;
}

int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue){
    int count = 0;
    int index = getIndex(ruleKey);
    for(vector<string>& item : items){
        if(item[index] == ruleValue ){
            count += 1;
        }
    }
    return count;
}
};