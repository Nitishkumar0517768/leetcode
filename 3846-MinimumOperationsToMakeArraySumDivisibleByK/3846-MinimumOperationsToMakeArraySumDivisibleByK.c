// Last updated: 3/25/2026, 3:17:25 PM
int minOperations(int* nums, int numsSize, int k) {
    int sum = 0;

    for(int i=0; i<numsSize; i++){
        sum = sum  + nums[i];
    }

    return sum%k;
}