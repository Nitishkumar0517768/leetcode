// Last updated: 5/16/2026, 11:26:18 AM
1class Solution {
2public:
3    int countCompleteDayPairs(vector<int>& hours) {
4        int count = 0;
5
6        for(int i=0; i<hours.size()-1; i++){
7            for(int j=i+1; j<hours.size(); j++){
8                if((hours[i] + hours[j]) % 24 == 0){
9                    count++;
10                }
11            }
12        }
13        return count;
14    }
15};