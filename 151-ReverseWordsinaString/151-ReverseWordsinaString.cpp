// Last updated: 5/30/2026, 10:04:03 AM
1class Solution {
2public:
3    string reverseVowels(string s) {
4        string v = "";
5
6        for(int i=0; i<s.size(); i++){
7            if(s[i] == 'A' || s[i] == 'a' || s[i] == 'E' || s[i] == 'e' || s[i] == 'I' || s[i] == 'i' || s[i] == 'O' || s[i] == 'o' || s[i] == 'U' || s[i] == 'u'){
8                v.push_back(s[i]);
9            }
10        }
11
12        int n = v.size()-1;
13
14        for(int i=0; i<s.size(); i++){
15            if(s[i] == 'A' || s[i] == 'a' || s[i] == 'E' || s[i] == 'e' || s[i] == 'I' || s[i] == 'i' || s[i] == 'O' || s[i] == 'o' || s[i] == 'U' || s[i] == 'u'){
16                s[i] = v[n];
17                n--;
18            }
19        }
20        return s;
21    }
22};