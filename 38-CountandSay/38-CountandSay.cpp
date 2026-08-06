// Last updated: 8/6/2026, 3:54:37 PM
1class Solution {
2public:
3    string countAndSay(int n) {
4        if(n==1)
5        return "1";
6
7        string temp1 = "1";
8        string temp2 = "";
9
10        for(int i=2; i<=n; i++){
11            int count = 1;
12            for(int j=0; j<temp1.size()-1; j++){
13                if(temp1[j] == temp1[j+1]){
14                    count++;
15                }
16                else{
17                    temp2 += to_string(count);
18                    temp2 += temp1[j];
19                    count = 1;
20                }
21            }
22
23            temp2 += to_string(count);
24            temp2 += temp1.back();
25
26            temp1 = temp2;
27            temp2 = "";
28        }
29        return temp1;
30    }
31};