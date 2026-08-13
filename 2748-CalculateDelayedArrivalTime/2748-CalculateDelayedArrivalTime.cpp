// Last updated: 8/13/2026, 10:38:42 AM
class Solution {
public:
    int findDelayedArrivalTime(int arrivalTime, int delayedTime) {
        int time = arrivalTime + delayedTime;

        if(time < 24){
            return time;
        }
        else if(time < 48){
            return time - 24;
        }
        else{
            return 0;
        }
        
    }
};