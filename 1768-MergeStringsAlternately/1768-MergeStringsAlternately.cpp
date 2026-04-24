// Last updated: 4/24/2026, 10:44:43 AM
1class Solution {
2public:
3    string mergeAlternately(string word1, string word2) {
4        string res = "";
5
6        int i=0; 
7        int j=0;
8
9        while(i<word1.size() || j<word2.size()){
10            if(i<word1.size()){
11                res.push_back(word1[i]);
12                i++;
13            }
14            if(j<word2.size()){
15                res.push_back(word2[j]);
16                j++;
17            }
18        }
19        return res;
20    }
21};