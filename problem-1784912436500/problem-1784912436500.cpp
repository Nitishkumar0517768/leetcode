// Last updated: 7/24/2026, 10:30:36 PM
1class Solution {
2public:
3    int maxCoins(vector<int>& piles) {
4        sort(piles.begin(), piles.end());
5        int sum = 0;
6        int k = piles.size();
7        int count = 0;
8        int n = k/3;
9
10        for(int i=k-2; i>=0; i-=2){
11            if(count == n){
12                return sum;
13            }
14            sum += piles[i];
15            count++;
16        }
17        return sum;
18        
19    }
20};