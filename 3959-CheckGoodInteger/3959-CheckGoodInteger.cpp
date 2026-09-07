// Last updated: 9/7/2026, 1:46:25 PM
1class Solution {
2public:
3    bool checkGoodInteger(int n) {
4        int digit = 0;
5        int square = 0;
6
7        while(n>0){
8            int m = n%10;
9            digit += m;
10            square += (m * m);
11            n /= 10;
12        }
13
14        cout << digit << "  " << square << endl;
15
16        if((square - digit) >= 50){
17            return true;
18        }
19        return false;
20    }
21};