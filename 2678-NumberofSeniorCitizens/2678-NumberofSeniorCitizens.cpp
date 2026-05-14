// Last updated: 5/14/2026, 9:41:03 AM
1class Solution {
2public:
3    int countSeniors(vector<string>& details) {
4        int count = 0;
5
6        for(int i=0; i<details.size(); i++){
7            int year = (details[i][11] - '0')*10 + (details[i][12] - '0');
8            cout << year << endl;
9            if(year > 60) count++; 
10        }
11        return count;
12    }
13};