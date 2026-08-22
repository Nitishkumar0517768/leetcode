// Last updated: 8/22/2026, 10:38:29 PM
1class Solution {
2public:
3    int countNumbersWithUniqueDigits(int n) {
4        int m = pow(10, n);
5        int count = 1;
6
7        for(int i=1; i<m; i++){
8            bool arr[10] = {false};
9            int check = 0;
10            int k = i;
11
12            while(k>0){
13                int digit = k%10;
14                if(arr[digit]){
15                    check = 1;
16                    break;
17                }
18                else{
19                    arr[digit] = true;
20                }
21                k = k/10;
22            }
23            if(check == 0){
24                count++;
25            }
26        }
27        return count;
28    }
29};