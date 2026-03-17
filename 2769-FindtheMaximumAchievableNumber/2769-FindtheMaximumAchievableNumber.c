// Last updated: 3/17/2026, 5:27:14 PM
1int findFinalValue(int* nums, int numsSize, int original) {
2    int count = 0;
3    for(int i=0; i<numsSize; i++){
4        count = 0;
5        for(int j=0; j<numsSize; j++){
6            if(nums[j] == original){
7                original = 2 * nums[j];
8                count = 1;
9                break;
10            }
11        }
12        if(count == 0){
13            return original;
14        }
15    }
16    return original;
17}