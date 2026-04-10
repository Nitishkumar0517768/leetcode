// Last updated: 4/10/2026, 2:34:38 PM
1class Solution {
2public:
3    bool isAnagram(string s, string t) {
4
5        if(s.length() != t.length()){
6            return false;
7        }
8        
9            sort(s.begin(), s.end());
10            sort(t.begin(), t.end());
11        return s==t;
12    }
13};