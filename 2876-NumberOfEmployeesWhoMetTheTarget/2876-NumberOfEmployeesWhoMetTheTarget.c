// Last updated: 3/7/2026, 10:02:06 PM
int numberOfEmployeesWhoMetTarget(int* hours, int hoursSize, int target) {
    int count = 0;

    for(int i=0; i<hoursSize; i++){
        if(hours[i] >= target){
            count ++;
        }
    }
    return count;
}