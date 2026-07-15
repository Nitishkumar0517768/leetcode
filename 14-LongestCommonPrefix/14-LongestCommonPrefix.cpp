// Last updated: 7/15/2026, 11:00:40 PM
1class Solution {
2public:
3    string longestCommonPrefix(vector<string>& strs) {
4        string res = "";
5
6        for(int i=0; i<strs[0].size(); i++){
7            for(int j=0; j<strs.size()-1; j++){
8                if(strs[j][i] != strs[j+1][i]){
9                    return res;
10                }
11            }
12            res += strs[0][i];
13        }
14        return res;
15    }
16};