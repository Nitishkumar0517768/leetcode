// Last updated: 7/27/2026, 5:45:01 PM
1class Solution {
2public:
3    vector<int> findDegrees(vector<vector<int>>& matrix) {
4        vector<int> ans;
5
6        for(int i=0; i<matrix.size(); i++){
7            int sum = 0;
8            for(int j=0; j<matrix.size(); j++){
9                sum = sum + matrix[j][i];
10            }
11            ans.push_back(sum);
12        }
13        return ans;
14    }
15};