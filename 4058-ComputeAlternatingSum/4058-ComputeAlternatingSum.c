// Last updated: 3/7/2026, 10:01:51 PM
int alternatingSum(int* nums, int numsSize) {
    int sum = 0;

    for(int i=0; i<numsSize; i++){
        if(i%2 != 0){
            nums[i] = -nums[i];
        }
        sum = sum + nums[i];
    }
    return sum;
}