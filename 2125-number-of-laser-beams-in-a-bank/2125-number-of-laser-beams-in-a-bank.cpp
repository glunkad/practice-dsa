class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int sz = size(bank);
        vector<int> v;
        
        for(int i = 0; i < sz; i++){
            int count = 0;
            for(char c : bank[i]){
                if(c == '1') count++;
            }
            if(count != 0) v.push_back(count);
        }
        
        int no_of_beams = 0;
        
        for(int i = 1; i < size(v) ; i++){
            no_of_beams += v[i]*v[i-1];
        }
        
        return no_of_beams;
    }
};