// Last updated: 7/21/2026, 3:11:38 PM
1class Solution {
2public:
3    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
4        int count = 0;
5        int left = 0;
6        int sum = 0;
7
8        for(int right=0; right<arr.size(); right++){
9            sum += arr[right];
10
11            if(right-left+1 > k){
12                sum -= arr[left];
13                left++;
14            }
15
16            if(right-left+1 == k){
17                float avg = sum/k;
18                if(avg >= threshold){
19                    count++;
20                }
21            }
22        }
23        return count;
24    }
25};