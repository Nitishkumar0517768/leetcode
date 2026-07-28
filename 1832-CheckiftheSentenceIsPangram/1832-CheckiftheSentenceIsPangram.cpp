// Last updated: 7/28/2026, 2:55:26 PM
1class Solution {
2public:
3    bool checkIfPangram(string sentence) {
4        set<char> res(sentence.begin(), sentence.end());
5
6        if(res.size() < 26) return false;
7
8        return true;
9    }
10};