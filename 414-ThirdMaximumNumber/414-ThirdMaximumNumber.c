// Last updated: 3/7/2026, 10:02:33 PM
#include <stdio.h>
#include <limits.h>

int thirdMax(int* nums, int numsSize) {
    
    for(int i=0; i<numsSize; i++){
        for(int j=0; j<numsSize-1; j++){
            if(nums[j] > nums[j+1]){
                nums[j+1] = nums[j] + nums[j+1];
                nums[j] = nums[j+1] - nums[j];
                nums[j+1] = nums[j+1] - nums[j];
            }
        }
    }

    int j=0;
    for(int i=1; i<numsSize; i++){
        if(nums[i] != nums[j]){
            j++;
            nums[j] = nums[i];
        }
    }

    if(j<2){
        return nums[j];
    }

    return nums[j-2];
    
}