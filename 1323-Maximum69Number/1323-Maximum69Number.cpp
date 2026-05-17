// Last updated: 5/17/2026, 9:26:57 AM
1class Solution {
2public:
3    int maximum69Number (int num) {
4        vector<int> arr;
5        int res = 0;
6        
7        int i=num;
8        while(i>0){
9            int digit = i%10;
10            arr.push_back(digit);
11            i /= 10;
12        }
13        reverse(arr.begin(), arr.end());
14
15        for(int j=0; j<arr.size(); j++){
16            if(arr[j] == 6){
17                arr[j] = 9;
18                break;
19            }
20            
21        }
22
23        for(int digit : arr){
24            res = res*10 + digit;
25        }
26        return res;
27
28    }
29};