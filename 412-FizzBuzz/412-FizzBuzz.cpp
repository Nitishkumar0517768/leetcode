// Last updated: 5/7/2026, 9:20:18 AM
1class Solution {
2public:
3    vector<string> fizzBuzz(int n) {
4        vector<string> res;
5
6        for(int i = 1; i <= n; i++) {
7
8            if(i % 3 == 0 && i % 5 == 0) {
9                res.push_back("FizzBuzz");
10            }
11            else if(i % 3 == 0) {
12                res.push_back("Fizz");
13            }
14            else if(i % 5 == 0) {
15                res.push_back("Buzz");
16            }
17            else {
18                res.push_back(to_string(i));
19            }
20        }
21
22        return res;
23    }
24};