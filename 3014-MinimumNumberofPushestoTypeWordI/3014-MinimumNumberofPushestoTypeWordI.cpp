// Last updated: 7/30/2026, 3:36:23 PM
1class Solution {
2public:
3    int minimumPushes(string word) {
4        int n = word.size();
5
6        if(n<=8){
7            return n;
8        }
9        else if(n<=16){
10            int m = n-8;
11            return 2*m + 8;
12        }
13        else if(n<=24){
14            int m = n-16;
15            return 3*m + 16 +8;
16        }
17        else{
18            int m = n-24;
19            return 4*m + 24 + 16 + 8;
20        }
21        return 1;
22    }
23};