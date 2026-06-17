// Last updated: 6/17/2026, 9:26:06 AM
1class Solution {
2public:
3    string processStr(string s) {
4       string res = "";
5
6       for(int i=0; i<s.size(); i++){
7
8        if(isalpha(s[i])){
9            res += s[i];
10        }
11
12        if(s[i] == '*' && !res.empty()){
13            res.pop_back();
14        }
15        else if(s[i] == '#' && !res.empty()){
16            res += res;
17        }
18        else if(s[i] == '%' && !res.empty()){
19            reverse(res.begin(), res.end());
20        }
21       
22       } 
23       cout << res;
24       return res;
25    }
26};