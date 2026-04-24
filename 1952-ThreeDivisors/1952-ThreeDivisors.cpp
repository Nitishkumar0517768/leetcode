// Last updated: 4/24/2026, 9:12:50 AM
1class Solution {
2public:
3    bool isThree(int n) {
4        int count = 0;
5
6        for(int i=1; i<=n; i++){
7            if(n%i == 0){
8                count++;
9            }
10            
11        }
12        if(count == 3){
13                return true;
14            }
15        return false;
16    }
17};