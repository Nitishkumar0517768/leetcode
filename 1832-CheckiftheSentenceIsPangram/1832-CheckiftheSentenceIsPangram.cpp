// Last updated: 5/12/2026, 9:22:51 PM
1class Solution {
2public:
3    string truncateSentence(string s, int k) {
4        string res = "";
5        int count = 0;
6
7        for(int i=0; i<s.size(); i++){
8            if(s[i] == ' '){
9                count++;
10            }
11            if(count == k) return res;
12
13            res.push_back(s[i]);
14        }
15        return res;
16    }
17};