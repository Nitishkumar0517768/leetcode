// Last updated: 7/16/2026, 3:19:19 PM
1class Solution {
2public:
3    int lengthOfLongestSubstring(string s) {
4        unordered_set<char>freq;
5        int left = 0;
6        int right = 0;
7        int maxl = 0;
8
9        while(right < s.size()){
10            if(!freq.count(s[right])){
11                freq.insert(s[right]);
12                right++;
13            }
14            else{
15                freq.erase(s[left]);
16                left++;
17            }
18
19            maxl = max(right-left, maxl);
20        }
21        return maxl;
22    }
23};