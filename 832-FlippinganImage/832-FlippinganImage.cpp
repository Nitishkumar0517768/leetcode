// Last updated: 5/24/2026, 12:51:27 PM
1class Solution {
2public:
3    int maxProfit(vector<int>& prices) {
4        int buy = prices[0];
5        int profit = 0;
6
7        for(int i=1; i<prices.size(); i++){
8            if(buy > prices[i]){
9                buy = prices[i];
10            }
11            else if(prices[i]-buy > profit){
12                profit = prices[i] - buy;
13            }
14        }
15        return profit;
16    }
17};