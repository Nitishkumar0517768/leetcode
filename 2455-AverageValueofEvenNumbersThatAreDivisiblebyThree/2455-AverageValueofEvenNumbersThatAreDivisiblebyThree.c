// Last updated: 3/11/2026, 11:30:26 AM
1int averageValue(int* nums, int numsSize) {
2    int sum = 0;
3    int n = 0;
4
5    for(int i=0; i<numsSize; i++){
6        if(nums[i] % 2 == 0 && nums[i] % 3 == 0){
7            sum += nums[i];
8            n++;
9        }
10    }
11
12    if(n == 0){
13        return 0;
14    }
15    return sum/n;
16}