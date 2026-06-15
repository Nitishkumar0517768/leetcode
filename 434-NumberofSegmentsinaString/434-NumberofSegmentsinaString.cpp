// Last updated: 6/15/2026, 9:42:44 AM
1class Solution {
2public:
3    int countSegments(string s) {
4        vector<string> res;
5        string temp = "";
6
7        for(int i=0; i<s.size(); i++){
8            if(s[i] != ' '){
9                temp += s[i];
10            }
11            if(s[i] == ' ' || i == s.size()-1){
12                if(temp != ""){
13                    res.push_back(temp);
14                    temp = "";
15                }
16            }
17        }class Solution {
18public:
19    int countSegments(string s) {
20        vector<string> res;
21        string temp = "";
22
23        for(int i=0; i<s.size(); i++){
24            if(s[i] != ' '){
25                temp += s[i];
26            }
27            if(s[i] == ' ' || i == s.size()-1){
28                if(temp != ""){
29                    res.push_back(temp);
30                    temp = "";
31                }
32            }
33        }
34        return res.size();
35    }
36};
37        return res.size();
38    }
39};