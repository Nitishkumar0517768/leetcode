// Last updated: 5/17/2026, 8:23:35 AM
1class Solution {
2public:
3    bool checkValid(vector<vector<int>>& matrix) {
4
5        for(int i=0; i<matrix.size(); i++){
6        set<int> row, col;
7            for(int j=0; j<matrix.size(); j++){
8                row.insert(matrix[i][j]);
9                col.insert(matrix[j][i]);
10            }
11            if(row.size() != matrix.size() || col.size() != matrix.size()){
12                return false;
13            }
14        }
15        return true;
16    }
17};