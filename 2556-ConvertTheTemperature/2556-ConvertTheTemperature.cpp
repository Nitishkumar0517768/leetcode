// Last updated: 8/18/2026, 11:47:04 AM
class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        vector<double> res;
        double kel = celsius + 273.15;
        double fah = celsius * 1.80 + 32.00;

        res.push_back(kel);
        res.push_back(fah);

        return res;
    }
};