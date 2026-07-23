// Last updated: 7/23/2026, 2:51:14 PM
1class Solution {
2public:
3    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
4        vector<bool> res;
5        int maxC = INT_MIN;
6
7        for(int i=0; i<candies.size(); i++){
8            maxC = max(maxC, candies[i]);
9        }
10
11        for(int i=0; i<candies.size(); i++){
12            if(candies[i]+extraCandies >= maxC){
13                res.push_back(true);
14            }
15            else{
16                res.push_back(false);
17            }
18        }
19        return res;
20    }
21};