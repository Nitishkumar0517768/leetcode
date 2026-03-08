// Last updated: 3/8/2026, 9:26:26 PM
1bool isUgly(int n) {
2    if(n <= 0){
3        return false;
4    }
5
6    while(n%2 == 0){
7        n = n/2;
8    }
9
10    while(n%3 == 0){
11        n = n / 3;
12    }
13
14    while(n%5 == 0){
15        n = n/5;
16    }
17
18    if(n == 1){
19        return true;
20    }
21
22    
23    return false;
24}