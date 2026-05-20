// Last updated: 5/20/2026, 9:51:16 AM
1class Solution {
2public:
3    int firstUniqChar(string s) {
4        unordered_map<char, int> freq;
5
6        for(int i=0; i<s.size(); i++){
7            freq[s[i]]++;
8        }
9
10        for(int i=0; i<s.size(); i++){
11            if(freq[s[i]] == 1){
12                return i;
13            }
14        }
15        return -1;
16    }
17};