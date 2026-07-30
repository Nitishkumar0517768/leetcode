// Last updated: 7/30/2026, 5:32:05 PM
1class Solution {
2public:
3    bool hasSameDigits(string s) {
4        string temp1 = s;
5        
6        while(true){
7            string temp2 = temp1;
8            temp1 = "";
9
10            for(int i=0; i<temp2.size()-1; i++){
11                int n = temp2[i] - '0';
12                int m = temp2[i+1] - '0';
13
14                temp1 += to_string((m+n)%10);
15            }
16
17            if(temp1.size() == 2){
18                if(temp1[0] == temp1[1]){
19                    return true;
20                }
21                else{
22                    return false;
23                }
24            }
25        }
26        return true;
27    }
28};