// Last updated: 5/11/2026, 8:46:23 AM
1class Solution {
2public:
3    int maxPower(string s) {
4
5        if(s.size() == 1) return 1;
6
7        int count = 1;
8        int res = 0;
9
10        for(int i=0; i<s.size()-1; i++){
11            if(s[i] == s[i+1]){
12                count++;
13            }
14            else{
15                count = 1;
16            }
17            if(count > res){
18                res = count;
19            }
20        }
21        return res;
22    }
23};