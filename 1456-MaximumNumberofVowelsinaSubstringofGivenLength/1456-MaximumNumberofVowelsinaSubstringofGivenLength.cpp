// Last updated: 7/17/2026, 5:38:08 PM
1class Solution {
2public:
3    int maxVowels(string s, int k) {
4        int left = 0;
5        int count = 0;
6        int ans = 0;
7
8        for (int right = 0; right < s.size(); right++) {
9
10            if (s[right] == 'a' || s[right] == 'e' || s[right] == 'i' ||
11                s[right] == 'o' || s[right] == 'u') {
12                count++;
13            }
14
15            if (right - left + 1 > k) {
16
17                if (s[left] == 'a' || s[left] == 'e' || s[left] == 'i' ||
18                    s[left] == 'o' || s[left] == 'u') {
19                    count--;
20                }
21
22                left++;
23            }
24
25            if (right - left + 1 == k) {
26                ans = max(ans, count);
27            }
28        }
29
30        return ans;
31    }
32};