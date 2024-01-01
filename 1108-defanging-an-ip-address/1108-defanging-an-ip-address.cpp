class Solution {
public:
    string defangIPaddr(string arr) {
        int sz = arr.size();
        string op;
        
        for(int i = 0; i < sz;i++ ){
            if(arr[i] == '.' ){
                op += "[.]";
            }
            else{
                op += arr[i];   
            }
        }
        
        return op;
    }
};