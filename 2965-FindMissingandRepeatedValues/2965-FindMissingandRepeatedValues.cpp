// Last updated: 7/14/2026, 11:39:00 AM
1class Solution {
2public:
3    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
4        int n = grid.size();
5
6        vector<int> freq(n*n + 1, 0);
7
8        for(int i=0; i<n; i++){
9            for(int j=0; j<n; j++){
10                freq[grid[i][j]]++;
11            }
12        }
13
14        int rep = -1; 
15        int miss = -1;
16
17        for(int i=1; i<=n*n; i++){
18            if(freq[i] == 2){
19                rep = i;
20            }
21            if(freq[i] == 0){
22                miss = i;
23            }
24        }
25
26        return {rep, miss};
27    }
28};