// Last updated: 8/17/2026, 1:55:24 PM
1class Solution {
2public:
3
4    string convertToBinary(int num){
5        string binary = "";
6
7        while(num > 0){
8            binary = char((num%2) + '0') + binary;
9            num = num/2;
10        }
11        return binary;
12    }
13
14    string convertDateToBinary(string date) {
15        string ans = "";
16        string temp = "";
17
18        for(int i=0; i<date.size(); i++){
19            if(date[i] == '-'){
20                int num = stoi(temp);
21                
22                ans += convertToBinary(num);
23                ans += "-";
24                temp = "";
25            }
26            else{
27                temp += date[i];
28            }
29        }
30
31        int num = stoi(temp);
32        ans += convertToBinary(num);
33        return ans;
34    }
35};