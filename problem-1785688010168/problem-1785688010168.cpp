// Last updated: 8/2/2026, 9:56:50 PM
1class Solution {
2public:
3    int addDigits(int num) {
4
5        if(num < 10){
6            return num;
7        }
8
9        int nums = num;
10
11        while(true){
12            int sum = 0;
13            while(nums > 0){
14                sum += nums%10;
15                nums /= 10;
16            }
17            if(sum < 10){
18                return sum;
19            }
20            nums = sum;
21        }
22        return -1;
23    }
24};