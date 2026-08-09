// Last updated: 8/9/2026, 2:44:57 PM
1class Solution {
2public:
3    int minMaxDifference(int num) {
4        string s = to_string(num);
5        string max = "";
6        string min = "";
7        char minNum = s[0];
8        int check = 0;
9        char maxNum;
10
11        for(int i=0; i<s.size(); i++){
12            if(s[i] != '9' && check == 0){
13                maxNum = s[i];
14                check = 1;
15            }
16
17            if(s[i] == minNum){
18                min += '0';
19            }else{
20                min += s[i];
21            }
22
23            if(s[i] == maxNum){
24                max += '9';
25            }else{
26                max += s[i];
27            }
28        }
29
30        return stoi(max) - stoi(min);
31    }
32};