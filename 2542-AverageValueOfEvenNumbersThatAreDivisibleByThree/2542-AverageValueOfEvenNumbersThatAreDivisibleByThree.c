// Last updated: 3/25/2026, 3:17:46 PM
int averageValue(int* nums, int numsSize) {
    int sum = 0;
    int n = 0;

    for(int i=0; i<numsSize; i++){
        if(nums[i] % 2 == 0 && nums[i] % 3 == 0){
            sum += nums[i];
            n++;
        }
    }

    if(n == 0){
        return 0;
    }
    return sum/n;
}