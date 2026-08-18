// Last updated: 8/18/2026, 11:48:06 AM
int findFinalValue(int* nums, int numsSize, int original) {
    int count = 0;
    for(int i=0; i<numsSize; i++){
        count = 0;
        for(int j=0; j<numsSize; j++){
            if(nums[j] == original){
                original = 2 * nums[j];
                count = 1;
                break;
            }
        }
        if(count == 0){
            return original;
        }
    }
    return original;
}