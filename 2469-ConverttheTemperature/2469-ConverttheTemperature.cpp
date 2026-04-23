// Last updated: 4/23/2026, 9:57:18 PM
1class Solution {
2public:
3    vector<double> convertTemperature(double celsius) {
4        vector<double> res;
5        double kel = celsius + 273.15;
6        double fah = celsius * 1.80 + 32.00;
7
8        res.push_back(kel);
9        res.push_back(fah);
10
11        return res;
12    }
13};