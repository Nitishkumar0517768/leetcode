// Last updated: 5/29/2026, 10:55:54 AM
1class Solution {
2public:
3    int lengthOfLongestSubstring(string s) {
4        unordered_set<char> res;
5        int j=0;
6        int ans = 0;
7
8        for(int i=0; i<s.size(); i++){
9            while(res.count(s[i])){
10                res.erase(s[j]);
11                j++;
12            }
13            res.insert(s[i]);
14            ans = max(ans, i-j+1);
15        }
16        return ans;
17    }
18};