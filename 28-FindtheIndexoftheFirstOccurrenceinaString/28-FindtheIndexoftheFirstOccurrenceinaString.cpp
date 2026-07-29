// Last updated: 7/29/2026, 5:56:55 PM
1class Solution {
2public:
3    int strStr(string haystack, string needle) {
4        int k = needle.size();
5        int n = haystack.size();
6
7        for(int i=0; i<=n-k; i++){
8            int j = 0;
9            for(j=0; j<k; j++){
10                if(haystack[i+j] != needle[j]){
11                    break;
12                }
13            }
14            if(j == k){
15                return i;
16            }
17        }
18        return -1;
19    }
20};