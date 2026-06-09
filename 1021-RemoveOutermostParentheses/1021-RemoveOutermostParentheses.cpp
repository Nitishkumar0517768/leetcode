// Last updated: 6/9/2026, 3:33:03 PM
1class Solution {
2public:
3    string removeOuterParentheses(string s) {
4        string res = "";
5        int count = 0;
6
7        for(int i=0; i<s.size(); i++){
8            if(s[i] == '('){
9                if(count > 0){
10                    res += s[i];
11                }
12                count++;
13            }
14            if(s[i] == ')'){
15                count--;
16                if(count > 0){
17                    res+= s[i];
18                }
19            }
20
21        }
22        return res;
23    }
24};