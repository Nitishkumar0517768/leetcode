// Last updated: 3/8/2026, 9:08:33 PM
1int findNumbers(int* nums, int numsSize) {
2    int count = 0;
3    int digit = 0;
4
5    for(int i=0; i<numsSize; i++){
6        digit = 0;
7        for(int j=nums[i]; j!=0; j=j/10){
8            digit++;
9        }
10
11        if(digit % 2 == 0){
12            count++;
13        }
14    }
15    return count;
16}