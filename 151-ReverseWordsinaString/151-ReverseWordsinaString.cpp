// Last updated: 4/11/2026, 3:02:07 PM
1class Solution {
2public:
3    string reverseWords(string s) {
4        string temp = "";
5        vector<string> wordStore;
6
7        for (int i = 0; i < s.length(); i++) {
8            if (s[i] != ' ') {
9                temp += s[i];
10            } else {
11                if (!temp.empty()) {
12                    wordStore.push_back(temp);
13                    temp = "";
14                }
15            }
16        }
17
18        
19        if (!temp.empty()) {
20            wordStore.push_back(temp);
21        }
22
23      
24        string ans = "";
25        for (int i = wordStore.size() - 1; i >= 0; i--) {
26            ans += wordStore[i];
27            if (i != 0) ans += " ";
28        }
29
30        return ans;
31    }
32};