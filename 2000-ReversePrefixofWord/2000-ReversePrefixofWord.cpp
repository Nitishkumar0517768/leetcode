// Last updated: 8/4/2026, 11:05:06 AM
1class Solution {
2public:
3    string reversePrefix(string word, char ch) {
4        int j = 0;
5        for(int i=0; i<word.size(); i++){
6            if(word[i] == ch){
7                while(i>j){
8                    swap(word[i], word[j]);
9                    j++;
10                    i--;
11                }
12                return word;
13            }
14
15        }
16        return word;
17    }
18};