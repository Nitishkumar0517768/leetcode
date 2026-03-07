// Last updated: 3/7/2026, 10:02:07 PM
int findNonMinOrMax(int* nums, int numsSize) {
    int n = 0;
    int m = 0;
    int max = nums[0];
    int min = nums[0];

    if(numsSize == 2){
        return -1;
    }

    for(int i=0; i<numsSize; i++){
        if(max < nums[i]){
            max = nums[i];
            n = i;
        }
        if(min > nums[i]){
            min = nums[i];
            m = i;
        }
    }

    if(n+1 < numsSize && n+1 != m){
        return nums[n+1];
    }
    else if(n-1 >= 0 && n-1 != m){
        return nums[n-1];
    }
    else if(m+1 < numsSize && m+1 != n){
        return nums[m+1];
    }
    else if(m-1 >= 0 && m-1 != n){
        return nums[m-1];
    }
    return -1;
}