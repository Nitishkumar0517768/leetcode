// Last updated: 6/5/2026, 1:23:53 PM
1class Solution {
2public:
3    string removeDuplicates(string s) {
4        string res = "";
5
6        for(char ch : s){
7            if(!res.empty() && res.back()==ch){
8                res.pop_back();
9            }
10            else{
11                res.push_back(ch);
12            }
13        }
14        return res;
15    }
16};