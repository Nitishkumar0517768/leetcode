// Last updated: 4/23/2026, 2:56:17 PM
1class Solution {
2public:
3    int scoreOfString(string s) {
4        int sum = 0;
5
6        for(int i=0; i<s.size()-1; i++){
7            int diff = s[i] - s[i+1];
8
9            if(diff < 0){
10                diff = -diff;
11            }
12            sum = sum + diff;
13        }
14        return sum;
15    }
16};