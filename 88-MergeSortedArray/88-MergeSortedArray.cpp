// Last updated: 5/15/2026, 9:17:45 PM
1class Solution {
2public:
3    int countOperations(int num1, int num2) {
4        int count = 0;
5        
6        while(num1!=0 && num2!=0){
7            if(num1 < num2){
8                num2 = num2 - num1;
9            }
10            else{
11                num1 = num1 - num2;
12            }
13            count++;
14        }
15        return count;
16    }
17};