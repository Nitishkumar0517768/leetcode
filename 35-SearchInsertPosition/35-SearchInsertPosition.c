// Last updated: 3/7/2026, 10:02:55 PM
int searchInsert(int* nums, int numsSize, int target) {
    int i;
    for(i=0; i<numsSize; i++){
        if(nums[i] == target){
            return i;
        }
        if(nums[i] > target){
            
            return i;
        }
    }
    return numsSize;
}