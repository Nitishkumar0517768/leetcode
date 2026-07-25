// Last updated: 7/25/2026, 9:29:36 AM
1class Solution {
2public:
3    int maxProduct(int n) {
4        // vector<int> temp;
5
6        // while(n>0){
7        //     int digit = n%10;
8        //     temp.push_back(digit);
9        //     n /= 10;
10        // }
11
12        // sort(temp.begin(), temp.end());
13        // int m = temp.size();
14
15        // return (temp[m-1]) * (temp[m-2]);
16
17
18        int first = -1;
19        int second = -1;
20
21        while(n>0){
22            int digit = n%10;
23
24            if(digit > first){
25                second = first;
26                first = digit;
27            }
28            else if(digit > second){
29                second = digit;
30            }
31            n /= 10;
32        }
33        return first * second;
34
35
36    }
37};