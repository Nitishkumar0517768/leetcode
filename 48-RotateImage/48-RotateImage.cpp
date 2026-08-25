// Last updated: 8/25/2026, 3:06:18 PM
1class Solution {
2public:
3    void rotate(vector<vector<int>>& matrix) {
4        vector<vector<int>> ans;
5
6        for(int i=0; i<matrix.size(); i++){
7            vector<int> temp;
8            for(int j=matrix.size()-1; j>=0; j--){
9                temp.push_back(matrix[j][i]);
10            }
11            ans.push_back(temp);
12        }
13
14        for(int i=0; i<ans.size(); i++){
15            for(int j=0; j<ans.size(); j++){
16                matrix[i][j] = ans[i][j];
17            }
18        }
19    }
20};