class Solution {
public:
    int totalFruit(vector<int>& v){
        int sz = v.size();
        int counter = 0;
        int start = 0,end = 0;
        int d ;

        unordered_map<int,int> map;


        while(end < sz){
            if(map[v[end]] == 0){
                counter++;
            }
            map[v[end]]++;	
            end++;	

            while(counter > 2){
                if(map[v[start]] == 1){
                    counter--;

                }
                map[v[start]]--;
                start++;
            }
            d = max(d, end -  start);
        }
        return d;
    }

};