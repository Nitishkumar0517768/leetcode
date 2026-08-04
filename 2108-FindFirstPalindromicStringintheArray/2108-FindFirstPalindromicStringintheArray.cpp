// Last updated: 8/4/2026, 11:42:35 AM
1class Solution {
2public:
3    string firstPalindrome(vector<string>& words) {
4        for(int i=0; i<words.size(); i++){
5            int j=0;
6            int k=words[i].size()-1;
7            int check = 1;
8
9            while(k>j){
10                if(words[i][j] != words[i][k]){
11                    check = 0;
12                    break;
13                }
14                j++;
15                k--;
16            }
17            if(check == 1){
18                return words[i];
19            }
20        }
21        return "";
22    }
23};