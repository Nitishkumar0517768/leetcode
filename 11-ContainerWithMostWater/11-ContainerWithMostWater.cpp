// Last updated: 5/11/2026, 8:01:41 AM
1class Solution {
2public:
3    bool judgeCircle(string moves) {
4        unordered_map<char, int> freq;
5
6        for(char ch : moves){
7            freq[ch]++;
8        }
9        if(freq['L'] == freq['R']  &&  freq['U'] == freq['D']){
10            return true;
11        }
12        return false;
13    }
14};