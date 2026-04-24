// Last updated: 4/24/2026, 9:50:13 AM
1class Solution {
2public:
3    int smallestNumber(int n, int t) {
4
5    int pro = 1;
6
7    for(int i=n; ; i++){
8        pro = 1;
9        for(int j=i; j!=0; j=j/10){
10            pro *= j%10;
11        }
12        if(pro % t == 0){
13            return i;
14        }
15    }
16    return 1;
17    }
18};