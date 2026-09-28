// Last updated: 9/28/2026, 12:00:04 PM
1class Solution {
2public:
3    int maxDepth(string s) {
4        int count = 0;
5        int ans = 0;
6
7        for(int i=0; i<s.size(); i++){
8            if(s[i] == '('){
9                count++;
10            }
11            else if(s[i] == ')'){
12                ans = max(ans, count);
13                count--;
14            }
15
16        }
17        return ans;
18    }
19};