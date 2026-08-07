// Last updated: 8/7/2026, 5:02:13 PM
1class Solution {
2public:
3    int countVowelStrings(int n) {
4        return (n+1) * (n+2) * (n+3) * (n+4)/24;
5    }
6};