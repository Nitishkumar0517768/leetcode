// Last updated: 3/7/2026, 10:02:41 PM
void moveZeroes(int* nums, int numsSize) {
    int count = 0;

    for(int i=0; i<numsSize; i++){
        if(nums[i] != 0){
            nums[count] = nums[i];
            count ++;
        }
    }
    for(int j=count; j<numsSize; j++ ){
        nums[j] = 0;
    }
}