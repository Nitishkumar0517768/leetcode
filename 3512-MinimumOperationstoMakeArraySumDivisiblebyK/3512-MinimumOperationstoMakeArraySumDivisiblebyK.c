// Last updated: 3/9/2026, 11:58:41 AM
1int minOperations(int* nums, int numsSize, int k) {
2    int sum = 0;
3
4    for(int i=0; i<numsSize; i++){
5        sum = sum  + nums[i];
6    }
7
8    return sum%k;
9}