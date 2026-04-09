// Last updated: 4/9/2026, 11:41:59 AM
1class Solution {
2public:
3    string reverseVowels(string s) {
4        string v = "";
5
6        for(int i=0; i<s.size(); i++){
7            if(s[i] == 'A' || s[i] == 'a' || s[i] == 'E' || s[i] == 'e' || s[i] == 'I' || s[i] == 'i' || s[i] == 'O' || s[i] == 'o' || s[i] == 'U' || s[i] == 'u' ){
8                v.push_back(s[i]);
9                
10            }
11        }
12
13        int n = v.size() - 1;
14
15        for(int i=0; i<s.size(); i++){
16            if(s[i] == 'A' || s[i] == 'a' || s[i] == 'E' || s[i] == 'e' || s[i] == 'I' || s[i] == 'i' || s[i] == 'O' || s[i] == 'o' || s[i] == 'U' || s[i] == 'u' ){
17                s[i] = v[n];
18                n--;
19            }
20        }
21    return s;
22    }
23};