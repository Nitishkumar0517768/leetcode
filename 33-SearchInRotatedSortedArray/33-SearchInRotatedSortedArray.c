// Last updated: 3/7/2026, 10:02:56 PM
int search(int* nums, int numsSize, int target) {
    for(int i=0; i<numsSize; i++){
        if(nums[i] == target){
            return i;
        }
    }
    return -1;
}