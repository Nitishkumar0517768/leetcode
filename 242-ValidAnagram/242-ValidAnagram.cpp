// Last updated: 7/14/2026, 9:59:56 PM
1class Solution {
2public:
3    bool isAnagram(string s, string t) {
4        if(s.size() != t.size()){
5            return false;
6        }
7
8        sort(s.begin(), s.end());
9        sort(t.begin(), t.end());
10
11        for(int i=0; i<s.size(); i++){
12            if(s[i] != t[i]){
13                return false;
14            }
15        }
16        return true;
17    }
18};