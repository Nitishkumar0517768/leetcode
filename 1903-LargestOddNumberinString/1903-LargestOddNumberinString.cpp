// Last updated: 9/7/2026, 2:20:48 PM
1class Solution {
2public:
3    string largestOddNumber(string num) {
4        int n = num.size();
5
6        for(int i=n-1; i>=0; i--){
7            int m = num[i] - '0';
8
9            if(m %2 != 0){
10                return num;
11            }
12            else{
13                num.erase(i,1);
14            }
15        }
16        return "";
17    }
18};