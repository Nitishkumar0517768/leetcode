// Last updated: 7/31/2026, 9:23:05 PM
1class Solution {
2public:
3    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
4        sort(seats.begin(), seats.end());
5        sort(students.begin(), students.end());
6        int sum = 0;
7
8        for(int i=0; i<seats.size(); i++){
9            sum += abs(seats[i]-students[i]);
10        }
11        return sum;
12    }
13};