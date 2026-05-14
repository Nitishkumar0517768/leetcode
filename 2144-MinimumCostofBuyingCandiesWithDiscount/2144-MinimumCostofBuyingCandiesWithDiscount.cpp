// Last updated: 5/14/2026, 8:53:08 AM
1class Solution {
2public:
3    int minimumCost(vector<int>& cost) {
4        int count = 0;
5        int totalCost = 0;
6        sort(cost.begin(), cost.end());
7
8        for(int i=cost.size()-1; i>=0; i--){
9            count++;
10            if(count%3 == 0){
11                continue;
12            }
13            totalCost += cost[i];
14        }
15        return totalCost;
16    }
17};