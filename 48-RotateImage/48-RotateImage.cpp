// Last updated: 8/25/2026, 3:28:22 PM
1class Solution {
2public:
3    void rotate(vector<vector<int>>& matrix) {
4        // vector<vector<int>> ans;
5
6        // for(int i=0; i<matrix.size(); i++){
7        //     vector<int> temp;
8        //     for(int j=matrix.size()-1; j>=0; j--){
9        //         temp.push_back(matrix[j][i]);
10        //     }
11        //     ans.push_back(temp);
12        // }
13
14        // for(int i=0; i<ans.size(); i++){
15        //     for(int j=0; j<ans.size(); j++){
16        //         matrix[i][j] = ans[i][j];
17        //     }
18        // }
19
20        
21        // method-2
22        int n = matrix.size();
23
24        for(int i=0; i<n; i++){
25            for(int j=i+1; j<n; j++){
26                swap(matrix[i][j], matrix[j][i]);
27            }
28        }
29
30        for(int i=0; i<n; i++){
31            reverse(matrix[i].begin(), matrix[i].end());
32        }
33    }
34};