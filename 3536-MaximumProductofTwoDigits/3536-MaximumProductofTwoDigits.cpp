// Last updated: 7/25/2026, 9:21:44 AM
1class Solution {
2public:
3    int maxProduct(int n) {
4        vector<int> temp;
5
6        while(n>0){
7            int digit = n%10;
8            temp.push_back(digit);
9            n /= 10;
10        }
11
12        sort(temp.begin(), temp.end());
13        int m = temp.size();
14
15        return (temp[m-1]) * (temp[m-2]);
16    }
17};