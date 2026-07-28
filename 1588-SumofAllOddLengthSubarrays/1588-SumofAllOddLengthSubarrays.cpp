// Last updated: 7/28/2026, 4:29:55 PM
1class Solution {
2public:
3    int sumOddLengthSubarrays(vector<int>& arr) {
4        int ans = 0;
5        int n = arr.size();
6
7        for(int i=1; i<=n; i+=2){
8            int sum = 0;
9            int k = 0;
10            for(int j=0; j<n; j++){
11                sum += arr[j];
12                if(j-k+1 > i){
13                    sum -= arr[k];
14                    k++;
15                }
16
17                if(j-k+1 == i){
18                    ans += sum;
19                }
20            }
21        }
22        return ans;
23    }
24};