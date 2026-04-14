// Last updated: 4/14/2026, 1:23:26 PM
1class Solution {
2public:
3    string longestCommonPrefix(vector<string>& strs) {
4        string res = "";
5        int count = 0;
6
7        for(int i=0; i<strs[0].size(); i++){
8                count = 0;
9            for(int j=0; j<strs.size()-1; j++){
10                if(strs[j][i] == strs[j+1][i]){
11                    count++;
12                }
13            }
14            if(count == strs.size()-1){
15                res.push_back(strs[0][i]);
16            }
17            else{
18                return res;
19            }
20        }
21        return res;
22    }
23};