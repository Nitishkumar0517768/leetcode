// Last updated: 3/7/2026, 10:02:28 PM
int findGCD(int* nums, int numsSize) {
    int max = nums[0];
    int min = nums[0];
    int n;

    for(int i=0; i<numsSize; i++){
        if(max < nums[i]){
            max = nums[i];
        }
        if(min > nums[i]){
            min = nums[i];
        }
    }
    for(int i=1; i<=min; i++){
        if(min%i ==0 && max%i == 0){
            n = i;
        }
    }
    return n;
}