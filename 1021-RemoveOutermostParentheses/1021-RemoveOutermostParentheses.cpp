// Last updated: 6/9/2026, 3:22:50 PM
1class Solution {
2public:
3    string removeOuterParentheses(string s) {
4        string res = "";
5        int left = 0;
6        int right = 0;
7        string temp = "";
8
9        for(int i=0; i<s.size(); i++){
10            if(s[i] == '('){
11                temp.push_back(s[i]);
12                left++;
13            }
14            if(s[i] == ')'){
15                temp.push_back(s[i]);
16                right++;
17            }
18
19            if(left == right){
20                temp.erase(temp.begin());
21                temp.pop_back();
22                res += temp;
23                temp = "";
24                left = 0;
25                right = 0;
26            }
27        }
28        return res;
29    }
30};