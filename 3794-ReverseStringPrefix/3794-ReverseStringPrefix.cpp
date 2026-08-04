// Last updated: 8/4/2026, 10:57:53 AM
1class Solution {
2public:
3    string reversePrefix(string s, int k) {
4        reverse(s.begin(), s.begin()+k);
5
6        return s;
7    }
8};