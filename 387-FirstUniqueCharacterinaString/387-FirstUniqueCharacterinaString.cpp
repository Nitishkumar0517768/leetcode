// Last updated: 4/15/2026, 9:42:41 AM
1class Solution {
2public:
3    int firstUniqChar(string s) {
4        unordered_map<char, int>freq;
5
6        for(char c : s){
7            freq[c]++;
8            // cout << c << " " << freq[c] << endl ;
9        }
10
11        for(int i=0; i<s.size(); i++){
12            if(freq[s[i]] == 1){
13                cout << freq[s[i]];
14                return i;
15            }
16        }
17        return -1;
18    }
19};