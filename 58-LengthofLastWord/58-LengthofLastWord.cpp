// Last updated: 4/14/2026, 1:51:44 PM
1class Solution {
2public:
3    int lengthOfLastWord(string s) {
4        int count = 0;
5
6        for(int i=s.size()-1; i>=0; i--){
7            if(s[i] != ' '){
8                count++;
9            }
10            if(s[i] == ' ' && count > 0){
11                return count;
12            }
13        }
14        return count;
15    }
16};