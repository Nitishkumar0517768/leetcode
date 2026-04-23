// Last updated: 4/23/2026, 3:34:58 PM
1class Solution {
2public:
3    int maximumWealth(vector<vector<int>>& accounts) {
4        int sum1 = 0;
5        for(int i = 0; i<accounts[0].size(); i++){
6            sum1 = sum1 + accounts[0][i];
7        }
8
9        for(int i=0; i<accounts.size(); i++){
10            int sum2 = 0;
11
12            for(int j=0; j<accounts[i].size(); j++){
13                sum2 = sum2 + accounts[i][j];
14            }
15            if(sum2 > sum1){
16                sum1 = sum2;
17            }
18        }
19        return sum1;
20    }
21};