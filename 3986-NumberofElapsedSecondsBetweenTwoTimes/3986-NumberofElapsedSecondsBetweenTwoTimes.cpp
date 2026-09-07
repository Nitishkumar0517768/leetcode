// Last updated: 9/7/2026, 1:33:14 PM
1class Solution {
2public:
3    int secondsBetweenTimes(string startTime, string endTime) {
4        string temp1 = "";
5        string temp2 = "";
6
7        int start = 0;
8        int end = 0;
9
10        int sec = 3600;
11
12        for(int i=0; i<8; i++){
13            if(startTime[i] == ':'){
14                start += stoi(temp1) * sec;
15                end += stoi(temp2) * sec;
16                temp1 = "";
17                temp2 = "";
18                sec = sec/60;
19            }
20            else{
21                temp1 += startTime[i];
22                temp2 += endTime[i];
23            }
24        }
25        start += stoi(temp1);
26        end += stoi(temp2);
27
28        return end - start;
29    }
30};