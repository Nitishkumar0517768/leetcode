// Last updated: 5/10/2026, 1:26:23 PM
1class Solution {
2public:
3    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
4        int count = 0;
5
6        for(int i=0; i<hours.size(); i++){
7            if(hours[i] >= target) count++;
8        }
9        return count;
10    }
11};