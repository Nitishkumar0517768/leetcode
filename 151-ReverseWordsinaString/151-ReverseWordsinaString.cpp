// Last updated: 5/30/2026, 9:52:04 AM
1class Solution {
2public:
3    void reverseString(vector<char>& s) {
4        int i=0;
5        int j=s.size()-1;
6
7        while(j>i){
8            char temp = s[i];
9            s[i] = s[j];
10            s[j] = temp;
11            i++;
12            j--;
13        }
14    }
15};