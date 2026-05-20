// Last updated: 5/20/2026, 9:37:47 AM
1class Solution {
2public:
3    string mergeAlternately(string word1, string word2) {
4        string res = "";
5        int i=0; 
6        int j=0;
7        
8        while(i<word1.size() && j<word2.size()){
9            res = res + word1[i];
10            res = res + word2[j];
11            i++;
12            j++;
13        }
14
15        while(i<word1.size()){
16            res = res + word1[i];
17            i++;
18        }
19        while(j<word2.size()){
20            res = res + word2[j];
21            j++;
22        }
23        return res;
24    }
25};