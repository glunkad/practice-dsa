class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) {
        int no_plants = size(plants);
        int steps = 0;
        int k = capacity;
        for(int i = 0; i < no_plants; i++){
            if(plants[i] > k){
                steps += 2*i;
                k = capacity;
            }  
            steps++;
            k-=plants[i];
        }
        return steps;
    }
};