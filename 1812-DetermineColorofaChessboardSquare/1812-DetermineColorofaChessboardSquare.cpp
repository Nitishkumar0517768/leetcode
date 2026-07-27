// Last updated: 7/27/2026, 3:41:44 PM
1class Solution {
2public:
3    bool squareIsWhite(string coordinates) {
4        int n = coordinates[0] - '0';
5        int m = coordinates[1] - '0';
6        if((m+n)%2 == 0){
7            return false;
8        }
9        return true;
10    }
11};