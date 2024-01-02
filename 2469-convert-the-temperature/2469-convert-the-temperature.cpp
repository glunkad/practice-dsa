class Solution {
public:
    vector<double> convertTemperature(double c) {
        double k =  c + 273.15;
        double f = c *1.80 + 32.00;
        
        vector<double> v;
        v.push_back(k);
        v.push_back(f);
        
        return v;
    }
};