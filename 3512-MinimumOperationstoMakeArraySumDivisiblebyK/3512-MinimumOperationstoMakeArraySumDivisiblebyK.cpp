// Last updated: 5/18/2026, 12:00:17 PM
1class Solution {
2public:
3    int scoreOfString(string s) {
4        int sum = 0;
5
6        for(int i=0; i<s.size()-1; i++){
7            int diff = abs(s[i]-s[i+1]);
8            sum = sum  + diff;
9        }
10        return sum;
11    }
12};