// Last updated: 4/24/2026, 11:21:58 AM
1class Solution {
2public:
3    bool isPalindrome(string s) {
4        string res = "";
5
6        for(int i=0; i<s.size(); i++){
7            if((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z') || (s[i] >='0' && s[i] <= '9') ){
8                s[i] = tolower(s[i]);
9                res.push_back(s[i]);
10            }
11        }
12
13        int i=0; 
14        int j=res.size() - 1;
15
16        while(j > i){
17            if(res[i] == res[j]){
18                i++;
19                j--;
20            }
21            else{
22                return false;
23            }
24        }
25        return true;
26    }
27};