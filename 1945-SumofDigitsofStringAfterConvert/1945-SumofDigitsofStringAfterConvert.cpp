// Last updated: 8/2/2026, 9:50:27 PM
1class Solution {
2public:
3    int getLucky(string s, int k) {
4        string m = "";
5        string temp1;
6
7        for(int i=0; i<s.size(); i++){
8            int temp = s[i] - 'a' + 1;
9            m += to_string(temp);
10        }
11
12        temp1 = m;
13
14        for(int j=0; j<k; j++){
15            int sum = 0;
16            for(int l=0; l<temp1.size(); l++){
17                sum += temp1[l] - '0';
18            }
19            temp1 = to_string(sum);
20        }
21
22        return stoi(temp1);
23    }
24};