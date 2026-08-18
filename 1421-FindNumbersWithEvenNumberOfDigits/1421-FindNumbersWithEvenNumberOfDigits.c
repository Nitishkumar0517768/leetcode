// Last updated: 8/18/2026, 11:50:49 AM
int findNumbers(int* nums, int numsSize) {
    int count = 0;
    int digit = 0;

    for(int i=0; i<numsSize; i++){
        digit = 0;
        for(int j=nums[i]; j!=0; j=j/10){
            digit++;
        }

        if(digit % 2 == 0){
            count++;
        }
    }
    return count;
}