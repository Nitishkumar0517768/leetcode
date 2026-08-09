// Last updated: 8/9/2026, 2:54:17 PM
1class Solution {
2public:
3    int findDelayedArrivalTime(int arrivalTime, int delayedTime) {
4        int time = arrivalTime + delayedTime;
5
6        if(time < 24){
7            return time;
8        }
9        else if(time < 48){
10            return time - 24;
11        }
12        else{
13            return 0;
14        }
15        
16    }
17};