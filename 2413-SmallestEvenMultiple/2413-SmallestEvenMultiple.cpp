// Last updated: 4/23/2026, 10:01:44 PM
1class Solution {
2public:
3    int smallestEvenMultiple(int n) {
4        int i;
5        for (i = 1; i <= 2 * n; i++) {
6            if (i % 2 == 0 && i % n == 0) {
7                break;
8            }
9        }
10        return i;
11    }
12};