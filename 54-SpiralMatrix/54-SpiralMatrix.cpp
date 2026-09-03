// Last updated: 9/3/2026, 10:50:29 PM
1class Solution {
2public:
3    vector<int> spiralOrder(vector<vector<int>>& matrix) {
4        vector<int> ans;
5        int srow = 0;
6        int scol = 0;
7        int erow = matrix.size()-1;
8        int ecol = matrix[0].size()-1;
9
10        while(srow <= erow && scol <= ecol){
11            
12            for(int i=scol; i<=ecol; i++){
13                ans.push_back(matrix[srow][i]);
14            }
15
16            for(int i=srow+1; i<=erow; i++){
17                ans.push_back(matrix[i][ecol]);
18            }
19
20            if(srow < erow){
21                for(int i=ecol-1; i>=scol; i--){
22                    ans.push_back(matrix[erow][i]);
23                }
24            }
25
26            if(scol < ecol){
27                for(int i=erow-1; i>=srow+1; i--){
28                    ans.push_back(matrix[i][scol]);
29                }
30            }
31
32            srow++;
33            scol++;
34            erow--;
35            ecol--;
36        }
37        return ans;
38    }
39};